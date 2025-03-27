#include <stdio.h>

int main(void) {
    char tamanho;

    printf("Digite as vendas. F para encerrar:\n");

    int combo = 0;
    int burgas = 0;
    int potato = 0;
    int suk = 0;
    int total = 0;
    int itens = 0;

    while (1) {
        scanf(" %c", &tamanho);

        if (tamanho == 'F' || tamanho == 'f') {
            break;
        }

        switch (tamanho) {

            case 'C':
                combo++;
                itens++;
                total += 30;
                break;

            case 'B':
                burgas++;
                itens++;
                total += 15;
                break;
  
            case 'P':
                potato++;
                itens++;
                total += 10;
                break;

            case 'S':
                suk++;
                itens++;
                total += 9;
                break;
            default:
                printf("Opção inválida!\n");
        }
    }

    printf("\nRelatório de Vendas:\n");
    printf("Combos: %d\n", combo);
    printf("Hambúrgueres: %d\n", burgas);
    printf("Batatas: %d\n", potato);
    printf("Sucos: %d\n", suk);
    printf("-----------------------------\n");
    printf("Total de itens vendidos: %d\n", itens);
    printf("Valor total:  %d R$", total);

    return 0;
}