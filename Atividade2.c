#include <stdio.h>
 int main(void){
     int soma = 0;
     int numero;
     int vezes=0;
     printf("Digite um numero (-5 para encerrar): ");
     scanf("%d", &numero);
     while(numero !=-5){
         soma+=numero;
           printf("Digite um numero (-5 para encerrar): ");
     scanf("%d", &numero);
     vezes++;
     
     }
     int media = soma/vezes;
     printf("REsultado da média:  %d", media);
     
 }