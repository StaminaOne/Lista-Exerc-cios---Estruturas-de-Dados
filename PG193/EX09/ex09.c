#include <stdio.h>
#define PRODUTOS 10

int main() {
    char nomes[PRODUTOS][50];
    int codigos[PRODUTOS];
    float precos[PRODUTOS];
    int i;

    printf("--- Exercicio 9 (PG 193) ---\n");
    for (i = 0; i < PRODUTOS; i++) {
        printf("--- Produto %d ---\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomes[i]);
        printf("Codigo: ");
        scanf("%d", &codigos[i]);
        printf("Preco: ");
        scanf("%f", &precos[i]);
    }

    printf("\n--- Relatorio de Aumentos ---\n");
    for (i = 0; i < PRODUTOS; i++) {
        int cond_codigo_par = (codigos[i] % 2 == 0);
        int cond_preco_alto = (precos[i] > 1000.0);
        float novo_preco = precos[i];

        if (cond_codigo_par && cond_preco_alto) {
            novo_preco *= 1.20;
        } else if (cond_codigo_par) {
            novo_preco *= 1.15;
        } else if (cond_preco_alto) {
            novo_preco *= 1.10;
        }

        if (novo_preco != precos[i]) {
            printf("Produto: %s | Codigo: %d | Preco Antigo: R$%.2f | Novo Preco: R$%.2f\n",
                   nomes[i], codigos[i], precos[i], novo_preco);
        }
    }

    return 0;
}