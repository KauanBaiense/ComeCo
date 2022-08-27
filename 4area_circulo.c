#include<stdio.h>
#include<stdlib.h>

int main(void){
float raio, area, PI = 3.1415;
//const float PI = 3.1415;

printf("Insira o valor do raio:");
scanf("%f",&raio);

area = (raio*raio)*PI;

printf("Area do circulo= %.1f\n",area);

return 0;
}


    
