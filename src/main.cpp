#include <Arduino.h>
//MODELS TO CONSIDER:
// ----MODEL---------|---Range[A]---|--Sensibility--|
//ACS712ELCTR-05B-T  | -5 to 5 A    | 185 mV/A      |
//ACS712ELCTR-20A-T  | -20 to 20 A  | 100 mV/A      |
//ACS712ELCTR-30A-T  | -30 to 30 A  | 66 mV/A       |
//---------------------------------------------------

//This sensor gives 2.5 V for a current of 0 [A], so
//we first define a voltage called Vx = Vm-2.5
float Vx;
float Vm;
//where Vm = voltage measured by the sensor
void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}