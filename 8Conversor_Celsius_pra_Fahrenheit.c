#include<stdio.h>
#include<stdlib.h>

int main(void){

float fahrenheit, celsius;
      
printf("Insira a temperatura em celsius:");
scanf("%f", &celsius);

fahrenheit = (celsius*1.8)+32; 

printf("Fahrenheit=%.2f\n", fahrenheit);
    return 0;
}