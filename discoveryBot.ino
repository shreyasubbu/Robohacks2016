#include <MyoController.h>

const int IN1 = 2; 
const int IN2 = 5; 
const int IN3 = 8; 
const int IN4 = 11; 
const int IN5 = 12; //Pincher motor (Assuming the pinching motion is the motor moving forward) 
const int IN6 = 13; //Pincher motor (Assuming the opening motion is the motor moving backward)

int i = 0;

MyoController myo = MyoController(); void setup() 
{ // put your setup code here, to run once: 
  pinMode(IN1, OUTPUT); 
  pinMode(IN2, OUTPUT); 
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT); 
  pinMode(IN5, OUTPUT); 
  pinMode(IN6, OUTPUT); 
  myo.initMyo(); } 
  
  void loop() { //2 & 4 high backwards //1 and 3 high forward //2 &3 high right //1&4 high left 
    myo.updatePose(); 
    switch (myo.getCurrentPose()){ 
      case rest: stopMotor(); 
      break; 
      case fist: forward(); 
      break; 
      case waveIn: left(); 
      break; 
      case waveOut: right(); 
      break; 
      case fingersSpread: backward(); 
      break; 
      case doubleTap: pinch(); 
      break; } 
      delay(50); }
}
void forward() { 
  digitalWrite(IN2, LOW); 
  digitalWrite(IN1, HIGH); 
  digitalWrite(IN4, LOW); 
  digitalWrite(IN3, HIGH); 
  delay(1000t);

  digitalWrite(in2, LOW); 
  digitalWrite(in1, LOW); 
  digitalWrite(in4, LOW); 
  digitalWrite(in3, LOW);*/ }

void backward() { 
  digitalWrite(IN2, HIGH); 
  digitalWrite(IN1, LOW); 
  digitalWrite(IN4, HIGH); 
  digitalWrite(IN3, LOW); 
  delay(1000t);

  digitalWrite(in2, LOW); 
  digitalWrite(in1, LOW); 
  digitalWrite(in4, LOW); 
  digitalWrite(in3, LOW); }

void left() { 
  digitalWrite(IN2, LOW); 
  digitalWrite(IN1, HIGH); 
  digitalWrite(IN4, HIGH); 
  digitalWrite(IN3, LOW); 
  delay(1000t);

  digitalWrite(in2, LOW); 
  digitalWrite(in1, LOW); 
  digitalWrite(in4, LOW); 
  digitalWrite(in3, LOW); }

void right() { 
  digitalWrite(IN2, HIGH); 
  digitalWrite(IN1, LOW); 
  digitalWrite(IN4, LOW); 
  digitalWrite(IN3, HIGH); 
  delay(1000t);

  digitalWrite(in2, LOW); 
  digitalWrite(in1, LOW); 
  digitalWrite(in4, LOW); 
  digitalWrite(in3, LOW);}

void stopMotor(){ 
  digitalWrite(IN1, LOW); 
  digitalWrite(IN2, LOW); 
  digitalWrite(IN3, LOW); 
  digitalWrite(IN4, LOW); }

void pinch(){ 
  digitalWrite(IN6, HIGH); 
  digitalWrite(IN5, LOW); 
  delay(100); 
  digitalWrite(IN6, LOW); }
