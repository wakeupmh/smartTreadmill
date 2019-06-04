#include <SoftwareSerial.h>
#include <Servo.h>

Servo servoAutocore;
SoftwareSerial btSerial(2, 3);  // RX | TX
// Connect the HC-05 TX to Arduino pin 2 RX. 
// Connect the HC-05 RX to Arduino pin 3 TX through a voltage divider.
int count = 0; 
int countMetal = 1000; 
int estado = 1;
int metalico = 1; 

void setup() {
  servoAutocore.attach(12);
  Serial.begin(9600);
  btSerial.begin(9600);
  pinMode(13,INPUT);
  pinMode(7, INPUT_PULLUP); 
  /*
    SET PINE AS INPUT / "_PULLUP" IS TO ENABLE INTERNAL RESISTOR
    OF ARDUINO TO ENSURE THAT THERE IS NO FLOATING BETWEEN 0 (LOW) AND 1 (HIGH)
  */
}
void loop() {
  metallic = digitalRead(7);
  state = digitalRead(13);
  char app = btSerial.read();
    if(metalico == 0) {
      countMetal++; 
      btSerial.print(countMetal); 
      servoAutocore.write(50);
      delay(1000);
      servoAutocore.write(0);
      metallic = 1;
    }else{
      if(state == 0) {
        contador++; 
        btSerial.print(contador);
        state= 1;
      }
    }
  delay(700);
}
