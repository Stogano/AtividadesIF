
#include <stdio.h>

int main() {


    int tentativas = 3;
    int palpite = 0;

    do {
        printf("Adivinhe o numero ");
        scanf("%d", &palpite);
   tentativas--;
        if (palpite == 7) {
            printf("Acertou mizeravi ");
            tentativas = 0;
        } else {
            printf("Errado! Você tem %d tentativas!\n", tentativas);
        }

     
    } while (tentativas > 0);




}