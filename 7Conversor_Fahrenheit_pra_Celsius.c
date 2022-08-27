#include<stdio.h>
#include<stdlib.h>

int main(void){

float fahrenheit, celsius;
      
printf("Insira a temperatura em Fahrenheit:");
scanf("%f", &fahrenheit);

celsius = 5*((fahrenheit-32)/9);

printf("Celsius=%.1f\n", celsius);
    return 0;
}