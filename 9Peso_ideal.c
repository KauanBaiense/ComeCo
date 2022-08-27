#include<stdio.h>
#include<stdlib.h>

int main(void){
float altura, homens, mulheres;

printf("Insira sua altura:");
scanf("%f",&altura);

homens = (72.7*altura) - 58;
mulheres = (62.1*altura) - 44.7;

printf("Peso ideal masculino:%.1f\nPeso ideal feminino:%.1f\n", homens, mulheres);
return 0;
}

//Para homens: (72.7*h) - 58
//Para mulheres: (62.1*h) - 44.7