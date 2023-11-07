
#include <stdio.h>

int main() {
    int numero, somaPares = 0, somaImpares = 0;
    int contadorPares = 0, contadorImpares = 0;

    printf("Digite números inteiros (digite um valor negativo para encerrar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;  // Encerra a leitura de dados quando um número negativo é digitado
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
        printf("Números pares: %d\n", contadorPares);
        printf("Média dos números pares: %.2f\n", (float)somaPares / contadorPares);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    if (contadorImpares > 0) {
        printf("Números ímpares: %d\n", contadorImpares);
        printf("Média dos números ímpares: %.2f\n", (float)somaImpares / contadorImpares);
    } else {
        printf("Nenhum número ímpar foi digitado.\n");
    }

    return 0;
}
