#include <stdio.h>
#define TAMANHO 15

int main() {
    int vetor[TAMANHO];
    int i, encontrou = 0;

    printf("--- Exercicio 4 (PG 193) ---\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nO numero 30 foi encontrado nas seguintes posicoes:\n");
    for (i = 0; i < TAMANHO; i++) {
        if (vetor[i] == 30) {
            printf("Posicao (indice) %d\n", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("O numero 30 nao foi encontrado no vetor.\n");
    }

    return 0;
}