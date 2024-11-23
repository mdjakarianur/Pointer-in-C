#include <stdio.h>

int main() {
  int x = 10;
  float y = 1.3f;
  char z = 'p';

  int *ptr_x = & x;
  float *ptr_y = & y;
  char *ptr_z = & z;

  printf("Value of x = %d\n", * ptr_x);
  printf("Value of y = %f\n", * ptr_y);
  printf("Value of z = %c\n", * ptr_z);
  
  return 0;
}
