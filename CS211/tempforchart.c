#include <stdio.h>


int main () {


  int fahr;
  for (fahr = 300; fahr >=0; fahr = fahr-20)
    printf("%3d\t%1.2f\n",fahr,((5.0)*(fahr-32))/9.0);
	   


  return 0;
  

}
