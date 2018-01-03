#include <DCMotor.h>
dcm a(5,8,9);
dcm b(6,10,11);
void setup() {
  // put your setup code here, to run once:
  a.minit();
  b.minit();
}

void loop() {
  // put your main code here, to run repeatedly:
  a.mspeed(0);
  b.mspeed(0);
}
