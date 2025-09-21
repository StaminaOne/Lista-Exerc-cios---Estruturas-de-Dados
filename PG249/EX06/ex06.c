#include <stdio.h>
#define LINHAS 20
#define COLUNAS 10

int main() {
    int matriz[LINHAS][COLUNAS];
    int soma_colunas[COLUNAS] = {0};
    int i, j;

    printf("--- Exercicio 6 (PG 249) ---\n");
    printf("Preenchendo matriz 20x10 com valores de exemplo...\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matriz[i][j] = i + j + 1;
            soma_colunas[j] += matriz[i][j];
        }
    }
    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matriz[i][j] *= soma_colunas[j];
        }
    }

    printf("\n--- Matriz Resultante ---\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}