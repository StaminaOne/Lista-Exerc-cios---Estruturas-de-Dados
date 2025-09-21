#include <stdio.h>
#define MESES 12
#define SEMANAS 4

int main() {
    float vendas[MESES][SEMANAS];
    float total_mes, total_semana[SEMANAS] = {0}, total_ano = 0;
    char *nome_mes[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int i, j;

    printf("--- Exercicio 5 (PG 249) ---\n");
    for (i = 0; i < MESES; i++) {
        printf("--- Vendas de %s ---\n", nome_mes[i]);
        for (j = 0; j < SEMANAS; j++) {
            printf("Semana %d: ", j + 1);
            scanf("%f", &vendas[i][j]);
        }
    }

    printf("\n--- Total de Vendas por Mes ---\n");
    for (i = 0; i < MESES; i++) {
        total_mes = 0;
        for (j = 0; j < SEMANAS; j++) {
            total_mes += vendas[i][j];
            total_semana[j] += vendas[i][j];
        }
        printf("%s: R$ %.2f\n", nome_mes[i], total_mes);
        total_ano += total_mes;
    }

    printf("\n--- Total de Vendas por Semana (no ano) ---\n");
    for (j = 0; j < SEMANAS; j++) {
        printf("Total da Semana %d: R$ %.2f\n", j + 1, total_semana[j]);
    }

    printf("\nTotal vendido no ano: R$ %.2f\n", total_ano);

    return 0;
}