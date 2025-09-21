#include <stdio.h>

int main() {
    int vetor[6];
    int i, cont_pares = 0, cont_impares = 0;

    printf("--- Exercicio 1 (PG 193) ---\n");
    for (i = 0; i < 6; i++) {
        printf("Digite o %dº numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros pares: ");
    for (i = 0; i < 6; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
            cont_pares++;
        }
    }
    printf("\nQuantidade de numeros pares: %d\n", cont_pares);

    printf("\nNumeros impares: ");
    for (i = 0; i < 6; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
            cont_impares++;
        }
    }
    printf("\nQuantidade de numeros impares: %d\n", cont_impares);

    return 0;
}