#include <stdio.h>


int main () {

  // ask for user input
  
  int crab;

  printf("How many crabs would you like?");

  for (scanf("%d", &crab); crab >= 0; --crab)
    if (crab>0) {

      printf("You have %d crabs left.\n", crab);
    }
    else {
      printf("You have no more crabs left :(");
	}
	    
  
  



  return 0;

}
