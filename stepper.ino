

#include <Stepper.h>

const int stepsPerRevolution = 4; // the motor step angle is 90 , 360/90 = 4 [[[

Stepper myStepper(stepsPerRevolution, 2, 3, 4, 5);

void setup() {

  myStepper.setSpeed(60); // for one rotation
 
}

void loop() {
 
  
  myStepper.step(stepsPerRevolution);
  delay(500);

  
  myStepper.step(-stepsPerRevolution); // negative sign to change the direction of rotation
  delay(500);

 
}
