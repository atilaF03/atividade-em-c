#include <stdio.h>

int main() {
    int quantidadeNotas;
    float nota, soma = 0.0;

    printf("Digite a quantidade de notas a serem inseridas: ");
    scanf("%d", &quantidadeNotas);

    if (quantidadeNotas <= 0) {
        printf("A quantidade de notas deve ser um n�mero positivo.\n");
        return 1;
    }

    for (int i = 1; i <= quantidadeNotas; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);

        soma += nota;
    }

    float media = soma / quantidadeNotas;

    printf("A m�dia das notas �: %.2f\n", media);

    return 0;
}
