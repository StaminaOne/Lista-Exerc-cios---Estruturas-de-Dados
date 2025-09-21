#include <stdio.h>
#define DIM 3

int main() {
    float matriz[DIM][DIM], multiplicador;
    int i, j;
    
    printf("--- Exercicio 9 (PG 249) ---\n");
    printf("Preencha a matriz 3x3:\n");
    for(i=0; i<DIM; i++) for(j=0; j<DIM; j++) scanf("%f", &matriz[i][j]);
    
    printf("Digite o numero multiplicador: ");
    scanf("%f", &multiplicador);
    
    for(i=0; i<DIM; i++) {
        for(j=0; j<DIM; j++) {
            matriz[i][j] *= multiplicador;
        }
    }

    printf("\n--- Matriz Resultante ---\n");
    for(i=0; i<DIM; i++) {
        for(j=0; j<DIM; j++) printf("%.2f\t", matriz[i][j]);
        printf("\n");
    }

    return 0;
}