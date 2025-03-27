// Online C compiler to run C program online
#include <stdio.h>

int main(void) {
  char lavage;

  printf("Digite a função de lavagem: (F para parar) ");
  scanf("%c", &lavage);

  int seca = 0;
  int enxagua = 0;
  int lava = 0;

  while( lavage != 'F' ) {
    switch (lavage) {
      case 'L':
	lava++;

      case 'E': 
	enxagua++;

      case 'S':
	seca++;
	break;
    }

    printf("Digite a função de lavagem:  (F para parar) ");
    scanf("%c", &lavage);
  }

  printf("Lavou: %d Enxguou: %d Secou: %d", lava, enxagua, seca);
  return 0;
}