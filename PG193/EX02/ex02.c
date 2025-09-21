#include <stdio.h>

int main() {
    int vetor[7];
    int i;

    printf("--- Exercicio 2 (PG 193) ---\n");
    for (i = 0; i < 7; i++) {
        printf("Digite o %dº numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nMultiplos de 2: ");
    for (i = 0; i < 7; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\nMultiplos de 3: ");
    for (i = 0; i < 7; i++) {
        if (vetor[i] % 3 == 0) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\nMultiplos de 2 E de 3: ");
    for (i = 0; i < 7; i++) {
        if (vetor[i] % 2 == 0 && vetor[i] % 3 == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}