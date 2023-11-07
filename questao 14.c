
#include <stdio.h>

int main() {
    int numero, somaPares = 0, somaImpares = 0;
    int contadorPares = 0, contadorImpares = 0;

    printf("Digite n�meros inteiros (digite um valor negativo para encerrar):\n");

    while (1) {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;  // Encerra a leitura de dados quando um n�mero negativo � digitado
        }

        if (numero % 2 == 0) {
            somaPares += numero;
            contadorPares++;
        } else {
            somaImpares += numero;
            contadorImpares++;
        }
    }

    if (contadorPares > 0) {
        printf("N�meros pares: %d\n", contadorPares);
        printf("M�dia dos n�meros pares: %.2f\n", (float)somaPares / contadorPares);
    } else {
        printf("Nenhum n�mero par foi digitado.\n");
    }

    if (contadorImpares > 0) {
        printf("N�meros �mpares: %d\n", contadorImpares);
        printf("M�dia dos n�meros �mpares: %.2f\n", (float)somaImpares / contadorImpares);
    } else {
        printf("Nenhum n�mero �mpar foi digitado.\n");
    }

    return 0;
}
