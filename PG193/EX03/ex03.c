#include <stdio.h>
#define TOTAL_PRODUTOS 10

int main() {
    int codigos[TOTAL_PRODUTOS];
    int estoque[TOTAL_PRODUTOS];
    int i, cod_cliente, cod_produto, qtd_desejada, produto_encontrado, pos_produto;

    printf("--- Exercicio 3 (PG 193) ---\n");

    for (i = 0; i < TOTAL_PRODUTOS; i++) {
        printf("Digite o codigo do produto %d: ", i + 1);
        scanf("%d", &codigos[i]);
        printf("Digite a quantidade em estoque: ");
        scanf("%d", &estoque[i]);
    }

    printf("\n--- Registro de Pedidos (digite 0 no codigo do cliente para sair) ---\n");
    printf("Digite o codigo do cliente: ");
    scanf("%d", &cod_cliente);

    while (cod_cliente != 0) {
        printf("Digite o codigo do produto: ");
        scanf("%d", &cod_produto);
        printf("Digite a quantidade desejada: ");
        scanf("%d", &qtd_desejada);

        produto_encontrado = 0;
        for (i = 0; i < TOTAL_PRODUTOS; i++) {
            if (codigos[i] == cod_produto) {
                produto_encontrado = 1;
                pos_produto = i;
                break;
            }
        }

        if (!produto_encontrado) {
            printf("Codigo inexistente.\n");
        } else {
            if (estoque[pos_produto] >= qtd_desejada) {
                estoque[pos_produto] -= qtd_desejada;
                printf("Pedido atendido. Obrigado e volte sempre.\n");
            } else {
                printf("Nao temos estoque suficiente dessa mercadoria.\n");
            }
        }

        printf("\nDigite o codigo do proximo cliente: ");
        scanf("%d", &cod_cliente);
    }

    printf("\n--- Estoque Atualizado ---\n");
    for (i = 0; i < TOTAL_PRODUTOS; i++) {
        printf("Produto Codigo: %d | Estoque: %d\n", codigos[i], estoque[i]);
    }

    return 0;
}