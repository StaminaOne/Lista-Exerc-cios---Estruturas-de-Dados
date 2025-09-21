#include <stdio.h>
#define VENDEDORES 10

int main() {
    char nomes[VENDEDORES][50];
    float vendas[VENDEDORES];
    float comissoes[VENDEDORES];
    float a_receber[VENDEDORES];
    float total_vendas = 0, maior_valor, menor_valor;
    int i, pos_maior = 0, pos_menor = 0;

    printf("--- Exercicio 6 (PG 193) ---\n");
    for (i = 0; i < VENDEDORES; i++) {
        printf("Digite o nome do vendedor %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o total de vendas de %s: ", nomes[i]);
        scanf("%f", &vendas[i]);
        printf("Digite o percentual de comissao de %s (ex: 4 para 4%%): ", nomes[i]);
        scanf("%f", &comissoes[i]);

        a_receber[i] = vendas[i] * (comissoes[i] / 100.0);
        total_vendas += vendas[i];
    }

    printf("\n--- Relatorio de Comissoes ---\n");
    for (i = 0; i < VENDEDORES; i++) {
        printf("Vendedor: %s | Valor a Receber: R$ %.2f\n", nomes[i], a_receber[i]);
    }

    printf("\nTotal de vendas de todos os vendedores: R$ %.2f\n", total_vendas);

    maior_valor = a_receber[0];
    menor_valor = a_receber[0];

    for (i = 1; i < VENDEDORES; i++) {
        if (a_receber[i] > maior_valor) {
            maior_valor = a_receber[i];
            pos_maior = i;
        }
        if (a_receber[i] < menor_valor) {
            menor_valor = a_receber[i];
            pos_menor = i;
        }
    }

    printf("\nMaior valor a receber: R$ %.2f (Vendedor: %s)\n", maior_valor, nomes[pos_maior]);
    printf("Menor valor a receber: R$ %.2f (Vendedor: %s)\n", menor_valor, nomes[pos_menor]);

    return 0;
}