#include <stdio.h>

int main() {
    int codigo;
    float preco;

    printf("Escolha um produto:\n");
    printf("1 - Camiseta\n");
    printf("2 - Cal�a\n");
    printf("3 - Sapato\n");
    printf("Digite o c�digo do produto: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Produto selecionado: Camiseta\n");
            preco = 20.0;  // Defina o pre�o da camiseta aqui
            break;
        case 2:
            printf("Produto selecionado: Cal�a\n");
            preco = 40.0;  // Defina o pre�o da cal�a aqui
            break;
        case 3:
            printf("Produto selecionado: Sapato\n");
            preco = 60.0;  // Defina o pre�o do sapato aqui
            break;
        default:
            printf("C�digo de produto inv�lido\n");
            return 1;
    }

    printf("Pre�o: R$%.2f\n", preco);

    return 0;
}
