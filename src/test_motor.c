#include <unistd.h>
#include <assert.h>

#include "motor.h"

int main(int argc, char **argv) {
  int file = init(320);
  assert(file != -1);

  const int speed[] = {1000, 3443, 2424};
  int res = set_motor_speed(file, speed);
  sleep(1);

  res = set_twist(file, 0.0, 1.0, 0.0);
  assert(res == 0);
  sleep(1);

  res = set_twist(file, 0.0, 0.0, 1.0);
  assert(res == 0);
  sleep(1);

  res = set_twist(file, 0.0, 1.0, 1.0);
  assert(res == 0);
  sleep(1);

  int stop[] = {0, 0, 0};
  res = set_motor_speed(file, stop);
  assert(res == 0);

  return 0;
}
