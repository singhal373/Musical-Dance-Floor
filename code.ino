#include <SD.h>                      // need to include the SD library

#define SD_ChipSelectPin 53  //using digital pin 4 on arduino nano 328

#include <TMRpcm.h>           //  also need to include this library...

#include <SPI.h>



TMRpcm tmrpcm;   // create an object for use in this sketch



int echoPin1=14;

int trigPin1=15;

int echoPin2=26;

int trigPin2=27;

int echoPin3=16;

int trigPin3=17;

int echoPin4=18;

int trigPin4=19;

int echoPin5=20;

int trigPin5=21;

int echoPin6=22;

int trigPin6=23;

int echoPin7=30;

int trigPin7=31;





void setup(){



  pinMode(trigPin1,OUTPUT);

  pinMode(echoPin1,INPUT);

  Serial.begin(9600);

  pinMode(trigPin2,OUTPUT);

  pinMode(echoPin2,INPUT);

  pinMode(trigPin3,OUTPUT);

  pinMode(echoPin3,INPUT);

  pinMode(trigPin4,OUTPUT);

  pinMode(echoPin4,INPUT);

  pinMode(trigPin5,OUTPUT);

  pinMode(echoPin5,INPUT);

  pinMode(trigPin6,OUTPUT);

  pinMode(echoPin6,INPUT);

  pinMode(trigPin7,OUTPUT);

  pinMode(echoPin7,INPUT);



  tmrpcm.speakerPin = 11; //11 on Mega, 9 on Uno, Nano, etc

 

  if (!SD.begin(SD_ChipSelectPin)) {  // see if the card is present and can be initialized:

  return;   // don't do anything more if not

  }

 tmrpcm.volume(1);

 

}

 

void loop(){  

long t1,t2,t3,t4,t5,t6,t7;

digitalWrite(trigPin1,LOW);

     delay(2);

digitalWrite(trigPin1,HIGH);

     delay(2);

digitalWrite(trigPin1,LOW);

t1=micro_to_cm(pulseIn(echoPin1,HIGH));

//delay(500);



Serial.print("t1=");

Serial.println(t1);

if (t1<=20 && t1>0)

{

      tmrpcm.play("1.wav");

      Serial.println("1 baj rha hai");

     delay(1200);

}



digitalWrite(trigPin2,LOW);

delay(2);

digitalWrite(trigPin2,HIGH);

delay(2);

digitalWrite(trigPin2,LOW);

t2=micro_to_cm(pulseIn(echoPin2,HIGH));

Serial.print("t2=");

Serial.println(t2);

if (t2<=20 && t2>0)

{

      tmrpcm.play("2.wav");

      Serial.println("2 baj rha hai");

      delay(1200);

}







digitalWrite(trigPin3,LOW);

     delay(2);

digitalWrite(trigPin3,HIGH);

     delay(2);

digitalWrite(trigPin3,LOW);

t3=micro_to_cm(pulseIn(echoPin3,HIGH));

//delay(500);



Serial.print("t3=");

Serial.println(t3);

if (t3<=20 && t3>0)

{

      tmrpcm.play("3.wav");

      Serial.println("3 baj rha hai");

      delay(1200);

}



digitalWrite(trigPin4,LOW);

delay(2);

digitalWrite(trigPin4,HIGH);

delay(2);

digitalWrite(trigPin4,LOW);

t4=micro_to_cm(pulseIn(echoPin4,HIGH));

Serial.print("t4=");

Serial.println(t4);

if (t4<=20 && t4>0)

{

      tmrpcm.play("4.wav");

      Serial.println("4 baj rha hai");

      delay(1200);

}





digitalWrite(trigPin5,LOW);

     delay(2);

digitalWrite(trigPin5,HIGH);

     delay(2);

digitalWrite(trigPin5,LOW);

t5=micro_to_cm(pulseIn(echoPin5,HIGH));

//delay(500);



Serial.print("t5=");

Serial.println(t5);

if (t5<=20 && t5>0)

{

      tmrpcm.play("5.wav");

      Serial.println("5 baj rha hai");

     delay(1200);

}



digitalWrite(trigPin6,LOW);

delay(2);

digitalWrite(trigPin6,HIGH);

delay(2);

digitalWrite(trigPin6,LOW);

t6=micro_to_cm(pulseIn(echoPin6,HIGH));

Serial.print("t6=");

Serial.println(t6);

if (t6<37 && t6>0)

{

      tmrpcm.play("6.wav");

      Serial.println("6 baj rha hai");

      delay(1200);

}



digitalWrite(trigPin7,LOW);

     delay(2);

digitalWrite(trigPin7,HIGH);

     delay(2);

digitalWrite(trigPin7,LOW);

t7=micro_to_cm(pulseIn(echoPin7,HIGH));

//delay(500);



Serial.print("t7=");

Serial.println(t7);

if (t7<=20 && t7>0)

{

      tmrpcm.play("7.wav");

      Serial.println("7 baj rha hai");

     delay(12+00);

}



 }

long micro_to_cm(long m){

  return m/29/2;}  
