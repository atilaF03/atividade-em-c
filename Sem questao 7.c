#include <stdio.h>

int main() {
    int escolha;

    printf("Menu:\n");
    printf("1 - Novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Configura��es\n");
    printf("Escolha uma op��o: ");
    scanf("%d", &escolha);

    switch (escolha){
        case 1:
            printf("Op��o selecionada: Novo jogo\n");
            // Coloque aqui o c�digo para iniciar um novo jogo
            break;
        case 2:
            printf("Op��o selecionada: Carregar jogo\n");
            // Coloque aqui o c�digo para carregar um jogo existente
            break;
        case 3:
            printf("Op��o selecionada: Configura��es\n");
            // Coloque aqui o c�digo para acessar as configura��es
            break;
        default:
            printf("Op��o inv�lida. Por favor, escolha uma op��o v�lida (1, 2 ou 3).\n");
    }

