#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    

    printf("primeira nota: ");
    scanf("%f", &nota1);
    
    printf("segunda nota: ");
    scanf("%f", &nota2);
    
    printf("terceira nota: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    printf("media: %.2f\n", media);
    
    return 0;
}