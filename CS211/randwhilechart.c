#include <stdio.h>
#include <math.h>


int main () {

  const float PI = 3.14159f;

  int upper, lower, step;

  float area, radius;
  
  upper = 50;
  lower = 0;
  step = 2;
  radius = lower;

  while (radius <= upper) {
    area = PI*pow(radius, 2);
      printf("%1.3f\t%1.3f\n",radius,area);
      radius = radius + step;


  }


  



  return 0;

}
