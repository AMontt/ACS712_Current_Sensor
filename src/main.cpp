#include <Arduino.h>
//MODELS TO CONSIDER:
// ----MODEL---------|---Range[A]---|--Sensibility--|
//ACS712ELCTR-05B-T  | -5 to 5 A    | 185 mV/A      |
//ACS712ELCTR-20A-T  | -20 to 20 A  | 100 mV/A      |
//ACS712ELCTR-30A-T  | -30 to 30 A  | 66 mV/A       |
//---------------------------------------------------
//PORT OF CONNECTION:
#define acs_port A0
//This sensor gives 2.5 V for a current of 0 [A], so
//we first define a voltage called Vx = Vm-2.5
float Vx;
float Vm;
//where Vm = voltage measured by the sensor
//We have the followoing relationship
//Vx = m*I
//Where m= Slope = Sensibility

//VARIABLES:
//float Slope = 185 |<----This one is for 05B-T
//float Slope = 100 |<----This one is for 20A-T
float Slope = 0.066; //|<----This one is for 30A-T
int M;
float Ix=0; //The real current to show.
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Current = ");
  Serial.println(Current(25));
}

float Current(int M){

  for(int i; i<=M; i++){
    Vm = analogRead(acs_port) * (5.0 / 1023);
    Ix = Vm/Slope;
  }
  Ix = Ix / M;
  return Ix;
}