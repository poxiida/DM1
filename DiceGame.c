#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int d1, d2, sum;
  srand(time(NULL));
  
  d1 = rand()%6;
  if(d1 == 0) d1 = 6;
  d2 = rand()%6;
  if(d2 == 0) d2 = 6;
  sum = d1 + d2;
  
  printf("Rolling dice...\n");
  printf("Dice 1: %d\n", d1);
  printf("Dice 2: %d\n", d2);
  printf("Total value: %d\n", sum);
   
  return 0;
}
