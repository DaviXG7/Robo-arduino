#include <Servo.h>
#include "Ultrasonic.h"
#include <SoftwareSerial.h>


const int motor1 = 11;

const int echo = 6;
const int trig = 7;


const int bttx = 5;
const int btrx = 4;

const int beep = 8;

Ultrasonic ultrasonic(trig,echo);


Servo servo;

SoftwareSerial bluetooth(btrx, bttx);

void megalovania() {
tone(beep, 587, 125); // D5
delay(125);
tone(beep, 587, 125); // D5
delay(125);
tone(beep, 1175, 250); // D6
delay(250);
tone(beep, 880, 250); // A5
delay(325);
tone(beep, 831, 125); // Ab5
delay(250);
tone(beep, 784, 250); // G5
delay(250);
tone(beep, 698, 250); // F5
delay(250);
tone(beep, 587, 125); // D5
delay(125);
tone(beep, 698, 125); // F5
delay(125);
tone(beep, 784, 125); // G5
delay(125);
tone(beep, 523, 125); // C5
delay(125);
tone(beep, 523, 125); // C5
delay(125);
tone(beep, 1175, 250); // D6
delay(250);
tone(beep, 880, 250); // A5
delay(325);
tone(beep, 831, 125); // Ab5
delay(250);
tone(beep, 784, 250); // G5
delay(250);
tone(beep, 698, 250); // F5
delay(250);
tone(beep, 587, 125); // D5
delay(125);
tone(beep, 698, 125); // F5
delay(125);
tone(beep, 784, 125); // G5
delay(125);
tone(beep, 494, 125); // B4
delay(125);
tone(beep, 494, 125); // B4
delay(125);
tone(beep, 1175, 250); // D6
delay(250);
tone(beep, 880, 250); // A5
delay(325);
tone(beep, 831, 125); // Ab5
delay(250);
tone(beep, 784, 250); // G5
delay(250);
tone(beep, 698, 250); // F5
delay(250);
tone(beep, 587, 125); // D5
delay(125);
tone(beep, 698, 125); // F5
delay(125);
tone(beep, 784, 125); // G5
delay(125);
tone(beep, 466, 125); // Bb4
delay(125);
tone(beep, 466, 125); // Bb4
delay(125);
tone(beep, 1175, 250); // D6
delay(250);
tone(beep, 880, 250); // A5
delay(325);
tone(beep, 831, 125); // Ab5
delay(250);
tone(beep, 784, 250); // G5
delay(250);
tone(beep, 698, 250); // F5
delay(250);
tone(beep, 587, 125); // D5
delay(125);
tone(beep, 698, 125); // F5
delay(125);
tone(beep, 784, 125); // G5
delay(125);
tone(beep, 587, 125); // D5
delay(125);
tone(beep, 587, 125); // D5
delay(125);
tone(beep, 1175, 250); // D6
delay(250);
tone(beep, 880, 250); // A5
delay(325);
tone(beep, 831, 125); // Ab5
delay(250);
tone(beep, 784, 250); // G5
delay(250);
tone(beep, 698, 250); // F5
delay(250);
tone(beep, 587, 125); // D5
delay(125);
tone(beep, 698, 125); // F5
delay(125);
tone(beep, 784, 125); // G5
delay(125);
tone(beep, 523, 125); // C5
delay(125);
tone(beep, 523, 125); // C5
delay(125);
tone(beep, 1175, 250); // D6
delay(250);
tone(beep, 880, 250); // A5
delay(325);
tone(beep, 831, 125); // Ab5
delay(250);
tone(beep, 784, 250); // G5
delay(250);
tone(beep, 698, 250); // F5
delay(250);
tone(beep, 587, 125); // D5
delay(125);
tone(beep, 698, 125); // F5
delay(125);
tone(beep, 784, 125); // G5
delay(125);
tone(beep, 494, 125); // B4
delay(125);
tone(beep, 494, 125); // B4
delay(125);
tone(beep, 1175, 250); // D6
delay(250);
tone(beep, 880, 250); // A5
delay(325);
tone(beep, 831, 125); // Ab5
delay(250);
tone(beep, 784, 250); // G5
delay(250);
tone(beep, 698, 250); // F5
delay(250);
tone(beep, 587, 125); // D5
delay(125);
tone(beep, 698, 125); // F5
delay(125);
tone(beep, 784, 125); // G5
delay(125);
tone(beep, 466, 125); // Bb4
delay(125);
tone(beep, 466, 125); // Bb4
delay(125);
tone(beep, 1175, 250); // D6
delay(250);
tone(beep, 880, 250); // A5
delay(325);
tone(beep, 831, 125); // Ab5
delay(250);
tone(beep, 784, 250); // G5
delay(250);
tone(beep, 698, 250); // F5
delay(250);
tone(beep, 587, 125); // D5
delay(125);
tone(beep, 698, 125); // F5
delay(125);
tone(beep, 784, 125); // G5
delay(125);
}

void setup() {

  Serial.begin(9600);
  bluetooth.begin(9600);


  megalovania();


  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);

  pinMode(motor1, OUTPUT);
  
  randomSeed(analogRead(0));
  servo.attach(A5);

 
  // put your setup code here, to run once:

}

int hcsr04(){
    digitalWrite(trig, LOW); //SETA O PINO 6 COM UM PULSO BAIXO "LOW"
    delayMicroseconds(2); //INTERVALO DE 2 MICROSSEGUNDOS
    digitalWrite(trig, HIGH); //SETA O PINO 6 COM PULSO ALTO "HIGH"
    delayMicroseconds(10); //INTERVALO DE 10 MICROSSEGUNDOS
    digitalWrite(trig, LOW); //SETA O PINO 6 COM PULSO BAIXO "LOW" NOVAMENTE
    return ultrasonic.Ranging(CM); //VARIÁVEL GLOBAL RECEBE O VALOR DA DISTÂNCIA MEDIDA
}


unsigned startTime = 0;
unsigned interval = 1000;

unsigned startTime2 = 0;
unsigned interval2 = 500;
unsigned used = false;


void loop() {
  int distancia = hcsr04();
  if(bluetooth.available()){
       int dadoBluetooth = bluetooth.read();
       if (dadoBluetooth == 102) {
        digitalWrite(motor1, HIGH);        
       }
       if (dadoBluetooth == 112) {
        digitalWrite(motor1, LOW);
       }
  }

  unsigned currentTime = millis();

  if (distancia >= 20) {
    noTone(beep);

    if(currentTime - startTime >= interval) {
      startTime = currentTime;

      servo.write(random(0,180));
    }
  } else {
    if(currentTime - startTime2 >= interval2) {
      startTime2 = currentTime;

      if (used){
        tone(beep,700);
      } else {
        tone(beep,1500);
      }
      used = !used;
    }
  }

 


  
    
}
