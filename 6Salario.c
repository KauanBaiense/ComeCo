#include<stdio.h>
#include<stdlib.h>

int main(void){
float phora, horas, salario;

printf("Quanto voce ganha por hora:");
scanf("%f", &phora);

printf("Qual o numero de horas trabalhadas no mes:");
scanf("%f", &horas);

salario = (phora*horas);

printf("Resultado do seu salario mensal:%.1f\n", salario);
    
    return 0;
}