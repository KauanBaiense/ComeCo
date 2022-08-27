#include<stdio.h>
#include<stdlib.h>

int main(void){

float lado, area;

printf("Insira o valor de um dos lados do quadrado:");
scanf("%f",&lado);

area = (lado*lado)*2;

printf("Dobro desta area= %.1f metros^2\n",area);

return 0;
}