#include <stdio.h>

int main() {
    int escolha;

    printf("Menu:\n");
    printf("1 - Novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Configurações\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    switch (escolha){
        case 1:
            printf("Opção selecionada: Novo jogo\n");
            // Coloque aqui o código para iniciar um novo jogo
            break;
        case 2:
            printf("Opção selecionada: Carregar jogo\n");
            // Coloque aqui o código para carregar um jogo existente
            break;
        case 3:
            printf("Opção selecionada: Configurações\n");
            // Coloque aqui o código para acessar as configurações
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma opção válida (1, 2 ou 3).\n");
    }

