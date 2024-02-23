//Register1 : -ve
//Register2 : +ve at end
//Register3 : +ve at middle
#include "WLedDisplayLib.h"
#define data1 12
#define latch1 11  // register1
#define clock1 10

#define data2 9
#define latch2 8  // register2
#define clock2 7

#define data3 6
#define latch3 5  // register3
#define clock3 4


#define brightnessPin 3  // pwm pin attached to register1


void setup() {
  Serial.begin(9600);
  for(int k = 3 ; k <= 12 ; k++){
    pinMode(k,OUTPUT);
  }
  for(int k = 5 ; k <= 11 ; k+=3){
    digitalWrite(k,HIGH);
  }
  // pinMode(data1, OUTPUT);
  // pinMode(data2, OUTPUT);
  // pinMode(data3, OUTPUT);

  // pinMode(latch1, OUTPUT);
  // pinMode(latch2, OUTPUT);
  // pinMode(latch3, OUTPUT);

  // pinMode(clock1, OUTPUT);
  // pinMode(clock2, OUTPUT);
  // pinMode(clock3, OUTPUT);

  //pinMode(brightnessPin, OUTPUT);  //Initialising the pins

  // digitalWrite(latch1, HIGH);
  // digitalWrite(latch2, HIGH);  //latch pins high initially
  // digitalWrite(latch3, HIGH);
  brightness(255);// full brightness initially
  randomSeed(analogRead(A0));      //random func seed
}

void loop() {
for(int i = 0 ; i < 8 ; i++){
  write(itr[i],V[i],M[i]);
  delay(1);
}
//letters();


// hearts();
// onebyone(100);
}

//how keybords work
//turn it into a library
//power supply
