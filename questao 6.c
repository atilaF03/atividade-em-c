#include <stdio.h>

int main() {
    int codigo;
    float preco;

    printf("Escolha um produto:\n");
    printf("1 - Camiseta\n");
    printf("2 - Calça\n");
    printf("3 - Sapato\n");
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Produto selecionado: Camiseta\n");
            preco = 20.0;  // Defina o preço da camiseta aqui
            break;
        case 2:
            printf("Produto selecionado: Calça\n");
            preco = 40.0;  // Defina o preço da calça aqui
            break;
        case 3:
            printf("Produto selecionado: Sapato\n");
            preco = 60.0;  // Defina o preço do sapato aqui
            break;
        default:
            printf("Código de produto inválido\n");
            return 1;
    }

    printf("Preço: R$%.2f\n", preco);

    return 0;
}
