#include <stdio.h>

int main() {


  int lower, upper, step;
  int fahr, cels;

  
  lower = 0;
  upper = 300;
  step = 20;

  

  
  fahr = lower;
  while (fahr<=upper) {

    cels =(5*(fahr-32))/9;

    printf("%d\t%d\n",fahr, cels);

    fahr = fahr+step;
  
  }


  return 0;

  
}
