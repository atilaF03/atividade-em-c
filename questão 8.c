#include <stdio.h>

int main() {
    int numero;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, digite um n�mero inteiro positivo.\n");
    } else {
        printf("Contagem regressiva a partir de %d:\n", numero);
        while (numero >= 0) {
            printf("%d\n", numero);
            numero--;
        }
    }

    return 0;
}
