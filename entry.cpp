#include <Servo.h>
#define IR_exit 13
int Switch =6;
int led=5;
Servo servo_exit;
int c=0;
void setup() {
  pinMode(Switch,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
//Serial.println(entryIR);
if((digitalRead(IR_exit))==HIGH) 
{
  
println("hello:");
}
