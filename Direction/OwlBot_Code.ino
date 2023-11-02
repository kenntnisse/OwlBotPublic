//THIS ONE WORKS: motor type TB6612


/*
 * @Description: In User Settings Edit
 * @Author: HOU Changhua
 * @Date: 2019-07-10 16:46:17
 * @LastEditTime: 2019-10-14 17:54:21
 * @LastEditors: Please set LastEditors
 */


#include "ApplicationFunctionSet_xxx0.h"

ApplicationFunctionSet Application_FunctionSet;

/*
  Forward,       //(0)
  Backward,      //(1)
  Left,          //(2)
  Right,         //(3)
  LeftForward,   //(4)
  LeftBackward,  //(5)
  RightForward,  //(6)
  RightBackward, //(7)
  stop_it        //(8)
*/
void move(int dir, int spd) {
  Application_FunctionSet.move(dir, spd);
}
void forward(int spd){
  move(0, spd);
}
void back(int spd){
  move(1,spd);
}
void left(int spd){
  move(2,spd);
}
void right(int spd){
  move(3,spd);
}
void lForward(int spd){
  move(4,spd);
}
void lBack(int spd){
  move(5,spd);
}
void rForward(int spd){
  move(6,spd);
}
void rBack(int spd){
  move(7,spd);
}
void stop(){
  move(8, 0);
}



void setup()
{
  // put your setup code here, to run once:
  Application_FunctionSet.ApplicationFunctionSet_Init();
  forward(255); delay(1000); // goes forward at speed 255 for 1 second. Delay is in ms.

  stop(); delay(500);

  back(255); delay(1000);
  
  stop();
  
}

void loop()
{
  //put your main code here, to run repeatedly:
  //Application_FunctionSet.Test();
  //Application_FunctionSet.ApplicationFunctionSet_OwlBotMotionControl(1,200);
}




