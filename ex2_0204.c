#include <stdio.h>

int main() {
    int numero, soma_pares = 0;
    
    printf("Digite um número de 1 a 6:\n");
    
    while (1) {
        printf("Número do dado: ");
        scanf("%d", &numero);
        
        if (numero < 1) {
            printf("Numero invalido!\n");
            continue;
        }
        if (numero > 6) {
            printf("Numero invalido!\n");
            continue;
        }
        
        if (numero % 2 == 0) {
            soma_pares += numero;
        } else {
            break;
        }
    }
    
    printf("Game over! Soma: %d\n", soma_pares);
    return 0;
}