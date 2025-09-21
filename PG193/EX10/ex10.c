#include <stdio.h>

int main() {
    int vet1[10], vet2[5];
    int vet_somas[10], vet_divisores[10];
    int i, j, soma_vet2 = 0;
    int cont_somas = 0, cont_divisores = 0;

    printf("--- Exercicio 10 (PG 193) ---\n");
    printf("Digite 10 numeros para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) scanf("%d", &vet1[i]);

    printf("Digite 5 numeros para o segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vet2[i]);
        soma_vet2 += vet2[i];
    }

    for (i = 0; i < 10; i++) {
        if (vet1[i] % 2 == 0) {
            vet_somas[cont_somas] = vet1[i] + soma_vet2;
            cont_somas++;
        } else {
            int qtd_divisores = 0;
            for (j = 0; j < 5; j++) {
                if (vet2[j] != 0 && vet1[i] % vet2[j] == 0) {
                    qtd_divisores++;
                }
            }
            vet_divisores[cont_divisores] = qtd_divisores;
            cont_divisores++;
        }
    }

    printf("\n--- Vetor Resultante 1 (Somas dos pares de vet1 com todos de vet2) ---\n");
    for (i = 0; i < cont_somas; i++) printf("%d ", vet_somas[i]);

    printf("\n\n--- Vetor Resultante 2 (Qtd de divisores dos impares de vet1 em vet2) ---\n");
    for (i = 0; i < cont_divisores; i++) printf("%d ", vet_divisores[i]);
    printf("\n");

    return 0;
}