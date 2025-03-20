#include <stdio.h>


int eh_triangulo(int a, int b, int c) {
    int hip, cat1, cat2;


    hip = a;
    cat1 = b;
    cat2 = c;
    
    if (b > hip) {
        hip = b;
        cat1 = a;
        cat2 = c;
    }
    if (c > hip) {
        hip = c;
        cat1 = a;
        cat2 = b;
    }

    
    if (hip * hip == cat1 * cat1 + cat2 * cat2) return 1;

    return 0;
}

int main() {
    int a, b, c;

    while (1) {
        printf("Digite três valores inteiros (-1 para sair): ");
        scanf("%d", &a);

        if (a == -1) return 0; 
        scanf("%d %d", &b, &c);

        if (eh_triangulo(a, b, c)) printf("Forma um triângulo retângulo!\n");
        if (!eh_triangulo(a, b, c)) printf("Não forma um triângulo retângulo.\n");
    }

    return 0;
}