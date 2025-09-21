#include <stdio.h>

int main() {
    int m[4][6], n[6][4];
    int i, j, soma_linha, soma_coluna;

    printf("--- Exercicio 7 (PG 249) ---\n");
    printf("Preenchendo Matriz M(4x6):\n");
    for(i=0; i<4; i++) for(j=0; j<6; j++) m[i][j] = i+j;

    printf("Preenchendo Matriz N(6x4):\n");
    for(i=0; i<6; i++) for(j=0; j<4; j++) n[i][j] = i+j;

    printf("\n--- Soma das Linhas de M com as Colunas de N ---\n");
    for (i = 0; i < 4; i++) {
        soma_linha = 0;
        soma_coluna = 0;

        for (j = 0; j < 6; j++) {
            soma_linha += m[i][j];
        }
        for (j = 0; j < 6; j++) {
            soma_coluna += n[j][i];
        }
        printf("Soma (Linha %d de M) + (Coluna %d de N) = %d + %d = %d\n", 
               i, i, soma_linha, soma_coluna, soma_linha + soma_coluna);
    }

    return 0;
}