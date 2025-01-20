#include <Wire.h>
#include <Servo.h>

int speed = 130; // PWM signal for DC motor speed
int servoPosition = 80; // PWM signal for servo position

Servo directionServo; // Definition of servo for driving direction 

const long interval = 200; // LED blinking interval

// Enum definition for control commands
enum Command {
  FORWARD = 2,    // Command to move forward
  BACKWARD = 3,   // Command to move backward
  STOP = 4,       // Command to stop
  RIGHT = 5,      // Command to turn right
  LEFT = 6        // Command to turn left
};

void setup() 
{
  Serial.begin(9600); // Initialize serial communication
  // Outputs for DC motor
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT); 
  //  Output for PWM signal to DC motor speed
  pinMode(5, OUTPUT); 
  //  Output for PWM signal to servo position
  directionServo.attach(6);  
  // Outputs for LEDs  
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT); 
  // Set the initial position of the driving direction servo
  directionServo.write(servoPosition); 
}

void moveForward(int speed)
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  analogWrite(5, 200);
  delay(10);
  analogWrite(5, speed);
}

void moveBackward(int speed) 
{
  unsigned long previousMillis = millis(); // Initialize time tracking
  unsigned long currentMillis = millis();
  bool toggle = false;
  
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  analogWrite(5, speed);

  // Start blinking LEDs during backward motion
  while (Serial.available() == 0)   // Continue as long as no new command is received
  { 
    currentMillis = millis();
    if (currentMillis - previousMillis >= interval) 
    {
      previousMillis = currentMillis;

      // Alternate the LEDs
      toggle = !toggle;
      digitalWrite(7, toggle); // Toggle LED on pin 7
      digitalWrite(8, !toggle); // Opposite state for LED on pin 8
    }
  }

  // Turn off LEDs once a new command is received
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
}

void stop()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
}

void turnRight()
{
  if (servoPosition > 40)
  {
    for (int c = 0; c < 5; c++)
    {
      servoPosition -= 5;
      directionServo.write(servoPosition); // Adjust the steering servo to turn right
      delay(50);
    }
  }
}

void turnLeft()
{
  if (servoPosition < 130)
  {
      for (int c = 0; c < 5; c++)
    {
      servoPosition += 5;
      directionServo.write(servoPosition); // Adjust the steering servo to turn right
      delay(50);
    }
  }
}

void loop() 
{ 
  if (Serial.available() > 0)
  {
    int receivedCommand = Serial.read(); // Receive command

    if (receivedCommand < 0 || receivedCommand > 255) 
    {
      return;  // If received command is out of range (0-255)
    }
    
    // Mapping the engine power percentage from the app to the PWM signal value
    if (receivedCommand > 100)
    {
      speed = map(receivedCommand, 125, 200, 100, 255); 
    }

    else
    {
       switch (receivedCommand) 
       {
        case FORWARD:
          moveForward(speed);
          break;
        case BACKWARD:
          moveBackward(speed);
          break;
        case STOP:
          stop();
          break;
        case RIGHT:
          turnRight();
          break;
        case LEFT:
          turnLeft();
          break;
       }
    }
  }
}
