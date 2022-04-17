#ifndef MOTOR_DRIVER_H
#define MOTOR_DRIVER_H

/* frequency in hertz */
int init(const unsigned int freq);

/* set 12 bit speed */
int set_motor_speed(int file, const int *speed);

/* set twist */
int set_twist(int file, double w, double v_x, double v_y);

#endif
