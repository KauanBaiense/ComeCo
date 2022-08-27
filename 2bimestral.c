#include <stdio.h>
//#include<stdlib.h>

int main(void){

float nota1, nota2, nota3, nota4, media;

printf("Valor da primeira nota:");
scanf("%f",&nota1);

printf("Valor da segunda nota:");
scanf("%f",&nota2);

printf("Valor da terceira nota:");
scanf("%f",&nota3);

printf("Valor da quarta nota:");
scanf("%f",&nota4);

media = (nota1 + nota2 + nota3 + nota4) / 4;

printf("Media: %.1f\n",media);

return 0;
}
