#include<stdio.h>
#include<stdlib.h>

int main(void) {
  int x,y,z;
  
  printf("valor de x:");
  scanf("%d", &x);
  
  printf("valor de y:");
  scanf("%d", &y);
  
  z=x+y;
 
  printf("x+y = %d\n", z);
 
 return 0;
}