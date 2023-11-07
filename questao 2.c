#include <stdio.h>
int main() {
    float valorCompra;
    int diaSemana;

    printf("Informe o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("Informe o dia da semana (1 para segunda-feira, 2 para terça-feira, etc.): ");
    scanf("%d", &diaSemana);

    if (valorCompra > 100.0) {
        float desconto = 0.0;

        if (diaSemana >= 1 && diaSemana <= 5) { // Dias da semana de segunda a sexta (1 a 5)
            desconto = valorCompra * 0.10; // 10% de desconto
        } else { // Fim de semana (sábado e domingo)
            desconto = valorCompra * 0.15; // 15% de desconto
        }

        printf("Desconto aplicado: R$ %.2f\n", desconto);
        printf("Total a pagar: R$ %.2f\n", valorCompra - desconto);
    } else {
        printf("Sem desconto aplicado, valor total a pagar: R$ %.2f\n", valorCompra);
    }

    return 0;
}
