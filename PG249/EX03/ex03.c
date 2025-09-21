#include <stdio.h>
#define LINHAS 6
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j, maior, menor;
    int linha_maior, col_maior, linha_menor, col_menor;

    printf("--- Exercicio 3 (PG 249) ---\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    menor = matriz[0][0];
    linha_maior = 0; col_maior = 0;
    linha_menor = 0; col_menor = 0;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                col_maior = j;
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linha_menor = i;
                col_menor = j;
            }
        }
    }

    printf("\nMaior elemento: %d | Posicao: [%d][%d]\n", maior, linha_maior, col_maior);
    printf("Menor elemento: %d | Posicao: [%d][%d]\n", menor, linha_menor, col_menor);

    return 0;
}