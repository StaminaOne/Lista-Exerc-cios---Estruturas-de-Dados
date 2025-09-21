#include <stdio.h>
#define ALUNOS 15
#define PROVAS 5

int main() {
    char nomes[ALUNOS][50];
    float notas[ALUNOS][PROVAS];
    float soma_notas, media_aluno, soma_classe = 0;
    int i, j;

    printf("--- Exercicio 4 (PG 249) ---\n");
    for (i = 0; i < ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);
        for (j = 0; j < PROVAS; j++) {
            printf("Digite a nota da prova %d de %s: ", j + 1, nomes[i]);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\n--- Relatorio de Alunos ---\n");
    for (i = 0; i < ALUNOS; i++) {
        soma_notas = 0;
        for (j = 0; j < PROVAS; j++) {
            soma_notas += notas[i][j];
        }
        media_aluno = soma_notas / PROVAS;
        soma_classe += media_aluno;
        printf("Aluno: %s | Media: %.2f | Situacao: ", nomes[i], media_aluno);
        if (media_aluno >= 7.0) {
            printf("Aprovado\n");
        } else if (media_aluno >= 4.0) {
            printf("Exame\n");
        } else {
            printf("Reprovado\n");
        }
    }

    printf("\nMedia da classe: %.2f\n", soma_classe / ALUNOS);

    return 0;
}