#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {

    // Para armazenar os 5 territórios digitados pelo usuário
    Territorio territorios[5];

    // Cadastro dos territórios
    for(int i = 0; i < 5; i++) {
        printf("\n===== Cadastro do Territorio %d =====\n", i + 1);

        printf("Digite o nome do territorio: ");
        scanf(" %29[^\n]", territorios[i].nome);

        printf("Digite a cor do exercito: ");
        scanf(" %9[^\n]", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos territórios cadastrados
    printf("\n\n===== Territorios Cadastrados =====\n");
    for(int i = 0; i < 5; i++) {
        printf("\nTerritorio %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
