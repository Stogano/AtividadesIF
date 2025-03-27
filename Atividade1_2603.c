#include <stdio.h>

int main() {
    int n, s = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            s += i;
        }
    }
    printf("Soma: %d\n", s);

    return 0;
}