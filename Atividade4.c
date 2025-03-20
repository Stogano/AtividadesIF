#include <stdio.h>


int main() {
    float raio, diametro, circunferencia, area, pi;
    pi = 3,14;

    
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    
    diametro = 2 * raio;
    circunferencia = 2 * pi * raio;
    area = pi * raio * raio;

    
    printf("Diametro: %.2f\n", diametro);
    printf("Circunferencia: %.2f\n", circunferencia);
    printf("area: %.2f\n", area);

    return 0;
}