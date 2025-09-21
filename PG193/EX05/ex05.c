#include <stdio.h>
#define ALUNOS_LOGICA 15
#define ALUNOS_LP 10

int main() {
    int logica[ALUNOS_LOGICA];
    int lp[ALUNOS_LP];
    int i, j;

    printf("--- Exercicio 5 (PG 193) ---\n");
    printf("Digite as matriculas dos alunos de Logica:\n");
    for (i = 0; i < ALUNOS_LOGICA; i++) {
        printf("%dº aluno: ", i + 1);
        scanf("%d", &logica[i]);
    }

    printf("\nDigite as matriculas dos alunos de Linguagem de Programacao:\n");
    for (i = 0; i < ALUNOS_LP; i++) {
        printf("%dº aluno: ", i + 1);
        scanf("%d", &lp[i]);
    }

    printf("\nMatriculas que cursam ambas as disciplinas:\n");
    for (i = 0; i < ALUNOS_LOGICA; i++) {
        for (j = 0; j < ALUNOS_LP; j++) {
            if (logica[i] == lp[j]) {
                printf("%d\n", logica[i]);
                break;
            }
        }
    }

    return 0;
}