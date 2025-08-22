#include <stdio.h>
#include <math.h>


int main () {

  //Take user input of how much celsius to convert.

  float celsius;

  printf("How many degrees celsius would you like to convert?\n");
  scanf("%f",&celsius);
  
  //Equation for converting into fahrenheit
  float fahrenheit = (celsius*(1.8))+32;
  

  //Prints output of fahrenheit
  printf("That is equal to %1.2f degrees fahrenheit.\n", fahrenheit);
  



  return 0;

}
