

#include <Stepper.h>

const int stepsPerRevolution = 4;

Stepper myStepper(stepsPerRevolution, 2, 3, 4, 5);

void setup() {

  myStepper.setSpeed(60);
 
}

void loop() {
 
  
  myStepper.step(stepsPerRevolution);
  delay(500);

  
  myStepper.step(-stepsPerRevolution);
  delay(500);
}
