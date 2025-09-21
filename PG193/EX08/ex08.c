#include <stdio.h>
#define ALUNOS 7

int main() {
    char nomes[ALUNOS][50];
    float medias[ALUNOS];
    float maior_media;
    int i, pos_maior = 0;

    printf("--- Exercicio 8 (PG 193) ---\n");
    for (i = 0; i < ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite a media final de %s: ", nomes[i]);
        scanf("%f", &medias[i]);
    }

    maior_media = medias[0];
    for (i = 1; i < ALUNOS; i++) {
        if (medias[i] > maior_media) {
            maior_media = medias[i];
            pos_maior = i;
        }
    }
    printf("\nAluno com a maior media: %s (Media: %.2f)\n", nomes[pos_maior], maior_media);

    printf("\n--- Alunos em Exame ---\n");
    for (i = 0; i < ALUNOS; i++) {
        if (medias[i] < 7.0) {
            float nota_necessaria = 10.0 - medias[i];
            printf("Aluno %s precisa tirar %.2f no exame.\n", nomes[i], nota_necessaria);
        }
    }

    return 0;
}