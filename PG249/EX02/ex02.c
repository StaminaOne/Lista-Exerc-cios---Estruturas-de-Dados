#include <stdio.h>
#define LINHAS 2
#define COLUNAS 4

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j, cont_intervalo, soma_pares = 0, cont_pares = 0;
    float media_pares;

    printf("--- Exercicio 2 (PG 249) ---\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < LINHAS; i++) {
        cont_intervalo = 0;
        for (j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] >= 12 && matriz[i][j] <= 20) {
                cont_intervalo++;
            }
            if (matriz[i][j] % 2 == 0) {
                soma_pares += matriz[i][j];
                cont_pares++;
            }
        }
        printf("Linha %d: %d elementos entre 12 e 20.\n", i, cont_intervalo);
    }

    if (cont_pares > 0) {
        media_pares = (float)soma_pares / cont_pares;
        printf("Media dos elementos pares da matriz: %.2f\n", media_pares);
    } else {
        printf("Nenhum elemento par na matriz.\n");
    }

    return 0;
}