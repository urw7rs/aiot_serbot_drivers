int init(const unsigned int pwm_freq);

int set_motor_speed(const int file, const int *speed);

int set_twist(const int file,
              const double w, const double v_x, const double v_y);
