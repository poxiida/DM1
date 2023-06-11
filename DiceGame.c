#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int d1, d2, sum;
  srand(time(NULL));
  char name[20];
  
  printf("What is your name?\n");
  scanf("%s", name);
  printf("Hello, %s!\n", name);
  
  d1 = rand()%6;
  if(d1 == 0) d1 = 6;
  d2 = rand()%6;
  if(d2 == 0) d2 = 6;
  sum = d1 + d2;
  
  printf("Rolling dice...\n");
  printf("Dice 1: %d\n", d1);
  printf("Dice 2: %d\n", d2);
  printf("Total value: %d\n", sum);
  if(sum > 7) printf("%s won!\n", name);
  else printf("%s lost\n", name);
  
  return 0;
}
