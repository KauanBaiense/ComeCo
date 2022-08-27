#include<stdio.h>
#include<stdlib.h>

int main(void){
float metros,centimetros;

printf("Digite o valor de metros que sera convertido em centimetros:");
scanf("%f",&metros);

centimetros= (metros*100);

printf("centimetros:%.1fcm\n",centimetros);

return 0;
}