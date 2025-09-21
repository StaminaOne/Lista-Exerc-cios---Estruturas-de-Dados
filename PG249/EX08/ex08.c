#include <stdio.h>
#define LINHAS 3
#define COLUNAS 8

int main() {
    int A[LINHAS][COLUNAS], B[LINHAS][COLUNAS];
    int SOMA[LINHAS][COLUNAS], DIF[LINHAS][COLUNAS];
    int i, j;
    
    printf("--- Exercicio 8 (PG 249) ---\n");
    printf("Preencha a matriz A:\n");
    for(i=0; i<LINHAS; i++) for(j=0; j<COLUNAS; j++) scanf("%d", &A[i][j]);

    printf("Preencha a matriz B:\n");
    for(i=0; i<LINHAS; i++) for(j=0; j<COLUNAS; j++) scanf("%d", &B[i][j]);

    for(i=0; i<LINHAS; i++) {
        for(j=0; j<COLUNAS; j++) {
            SOMA[i][j] = A[i][j] + B[i][j];
            DIF[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("\n--- Matriz Soma (A+B) ---\n");
    for(i=0; i<LINHAS; i++) {
        for(j=0; j<COLUNAS; j++) printf("%d\t", SOMA[i][j]);
        printf("\n");
    }

    printf("\n--- Matriz Diferenca (A-B) ---\n");
    for(i=0; i<LINHAS; i++) {
        for(j=0; j<COLUNAS; j++) printf("%d\t", DIF[i][j]);
        printf("\n");
    }

    return 0;
}