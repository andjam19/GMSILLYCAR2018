/*  Andrew Kirkwood
 *  HACKPSU 2018
 *  GM Car Competition
 *  
 *  About
 *  ----------------------------------------------------------------------------
 *  This is a very simple project that makes the car continuously go forward
 *  for x amount of time and stop. Obviously, it will not win the competition. 
 *  
 *  This project uses the starter code as the base.
 */

/* Include Servo library. */
#include <Servo.h>

// Create two servo objects
Servo ESCServo;
Servo StrServo;

// Create the initial servo commands
int SpeedCmd = 0; // 0% throttle
int timedSpeed = 0;

void setup()
{
 // Attach servo objects to output pins
  ESCServo.attach(9);     // ESC Servo attached
}

void loop()
{
  while(timedSpeed < 10)
  {
    SpeedCmd = 15;
    timedSpeed++;
  }

  // Reset values
  SpeedCmd = 0;
  timedSpeed = 0;
  
}// end loop()
