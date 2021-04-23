#include <Servo.h>
int IR_entry =12;
Servo servo_exit;
int led=7;
void setup() {
  // put your setup code here, to run once:
  servo_exit.attach(9);
 servo_exit.write(0);
pinMode(IR_entry,INPUT);
pinMode(led,INPUT);
}

void loop() {
//Serial.println(entryIR);
if((digitalRead(IR_exit))==HIGH) 
{
  
println("Thankyou");
}
