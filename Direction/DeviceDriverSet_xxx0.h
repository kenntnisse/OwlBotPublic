/*
 * @Description: Device driven package set
 * @Author:  HOU Changhua
 * @Date: 2019-07-11 13:40:52
 * @LastEditTime: 2019-10-14 18:06:30
 * @LastEditors:
 */

#ifndef _DeviceDriverSet_xxx0_H_
#define _DeviceDriverSet_xxx0_H_

#include <arduino.h>

/*Motor*/
class DeviceDriverSet_Motor
{
public:
  void DeviceDriverSet_Motor_Init(void);
  void DeviceDriverSet_Motor_control(boolean direction_A, uint8_t speed_A, //motor A
                                     boolean direction_B, uint8_t speed_B, //motor B
                                     boolean controlED                     //enable
  );                                                                       //motor control
private:

#define PIN_Motor_STBY 4
#define PIN_Motor_PWMA 9
#define PIN_Motor_PWMB 6
#define PIN_Motor_AIN 8
#define PIN_Motor_BIN 7

public:
#define speed_Max 250
#define direction_just true
#define direction_back false
#define direction_void 3

#define Duration_enable true
#define Duration_disable false
#define control_enable true
#define control_disable false
};

#endif
