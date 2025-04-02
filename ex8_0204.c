#include <stdio.h>
int testa_par(int x){
     return !(x%2);
 }
int main() {
     int  num=0;
    printf("Digite um numero par/impar: ");
    scanf("%d", &num);
    
 int par=testa_par(num);
printf("%d é par? %d ",num, par);
    
    return 0;
}