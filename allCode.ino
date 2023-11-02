// Language: Arduino
// Board: Arduino Nano
// Motor type: TB6612
// Adapted from tutorial at https://www.elegoo.com/blogs/arduino-projects/elegoo-owlbot-smart-robot-car-tutorial
// Last Editors: Shunzo Hida
// Last Edit: 13:20 UTC-7 Nov. 2 2023

#define Standby 4
#define PowerA 9
#define PowerB 6
#define InputA 8
#define InputB 7


void init(void){
  pinMode(Standby, OUTPUT); // used when sending commands to motors
  pinMode(PowerA, OUTPUT); // spins motor A at a specific speed
  pinMode(PowerB, OUTPUT); // spins motor B at a specific speed
  pinMode(InputA, OUTPUT); // Determines direction for motor A: HIGH == forward, LOW == backward
  pinMode(InputB, OUTPUT); // Determines direction for motor B: HIGH == forward, LOW == backward
}

// a = left motor, b = right motor
void motorControl(bool dirA, int spdA, bool dirB, int spdB){
  digitalWrite(Standby, HIGH);

  digitalWrite(InputA, dirA);
  analogWrite(PowerA, spdA);

  digitalWrite(InputB, dirB);
  analogWrite(PowerB, spdB);
}

void stop(void){
  move(0,0);
}
// most other movement functions are based off of
//    move(int, int). Please note that it does 
//    NOT stop the motor(s) after it's done
void move(int lSpd, int rSpd){
  motorControl((lSpd>0), abs(lSpd), (rSpd>0), abs(rSpd));
}
void move(int lSpd, int rSpd, int dur){
  move(lSpd, rSpd); delay(dur);
}

void forward(int spd){
  move(spd, spd);
}
void forward(int spd, int dur){
  move(spd, spd, dur);
}

void back(int spd){
  move(-spd, -spd);
}
void back(int spd, int dur){
  move(-spd, -spd, dur);
}

void left(int spd){
  move(-spd, spd);
}
void left(int spd, int dur){
  move(-spd, spd, dur);
}

void right(int spd){
  move(spd, -spd);
}
void right(int spd, int dur){
  move(spd, -spd, dur);
}



void setup(void){
  init();
}

void loop(void){


}


