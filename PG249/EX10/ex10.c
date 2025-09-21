#include <stdio.h>
#define DIM 5

int main() {
    int mat[DIM][DIM];
    int i, j, soma_l4=0, soma_c2=0, soma_dp=0, soma_ds=0, soma_total=0;

    printf("--- Exercicio 10 (PG 249) ---\n");
    printf("Preencha a matriz 5x5:\n");
    for(i=0; i<DIM; i++) for(j=0; j<DIM; j++) scanf("%d", &mat[i][j]);

    for(i=0; i<DIM; i++) {
        for(j=0; j<DIM; j++) {
            if(i == 4) soma_l4 += mat[i][j];
            if(j == 2) soma_c2 += mat[i][j];
            if(i == j) soma_dp += mat[i][j];
            if(i + j == DIM - 1) soma_ds += mat[i][j];
            soma_total += mat[i][j];
        }
    }

    printf("\nSoma da linha 4: %d\n", soma_l4);
    printf("Soma da coluna 2: %d\n", soma_c2);
    printf("Soma da diagonal principal: %d\n", soma_dp);
    printf("Soma da diagonal secundaria: %d\n", soma_ds);
    printf("Soma total de todos os elementos: %d\n", soma_total);
    
    return 0;
}