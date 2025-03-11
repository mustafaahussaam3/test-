/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 17
  #define LEFT_MOTOR_BACKWARD  19
  #define RIGHT_MOTOR_FORWARD  18
  #define LEFT_MOTOR_FORWARD   20
  #define RIGHT_MOTOR_ENABLE 16
  #define LEFT_MOTOR_ENABLE  21
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
