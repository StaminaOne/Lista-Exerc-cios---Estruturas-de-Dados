#include <stdio.h>
#define TAMANHO 10

int main() {
    float vetor[TAMANHO];
    float soma_positivos = 0;
    int i, cont_negativos = 0;

    printf("--- Exercicio 7 (PG 193) ---\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o %dº numero real: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (i = 0; i < TAMANHO; i++) {
        if (vetor[i] < 0) {
            cont_negativos++;
        } else {
            soma_positivos += vetor[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d\n", cont_negativos);
    printf("Soma dos numeros positivos: %.2f\n", soma_positivos);

    return 0;
}