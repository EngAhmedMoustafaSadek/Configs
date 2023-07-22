
#ifndef MOTOR_CFG_H_
#define MOTOR_CFG_H_


#define MOTOR_INIT_STATE     STOP      /* motor initial rotation direction CW or CCW or STOP*/
#define MOTOR_MAX_SPEED      1400

/****************** PIN CFG*************************/

#define M1_IN1    PINC0
#define M1_IN2    PINC1
#define M1_EN     PINC4

#define M2_IN1    PINC2
#define M2_IN2    PINC3
#define M2_EN     PINC5

#define M3_IN1    PIND0
#define M3_IN2    PIND1
#define M3_EN     PIND4

#define M4_IN1    PIND2
#define M4_IN2    PIND3
#define M4_EN     PIND5

#endif /* MOTOR_CFG_H_ */