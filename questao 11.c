#include <stdio.h>
#include <string.h>

int main() {
    char codigoAcessoCorreto[] = "codigo123";  // Substitua com o código de acesso correto
    char codigoInserido[50];  // Alocamos espaço para a string do código de acesso

    while (1) {
        printf("Digite o código de acesso: ");
        scanf("%s", codigoInserido);

        if (strcmp(codigoInserido, codigoAcessoCorreto) == 0) {
            printf("Acesso permitido. Bem-vindo!\n");
            break;  // Sai do loop quando o código correto é inserido
        } else {
            printf("Código de acesso incorreto. Tente novamente.\n");
        }
    }

    return 0;
}


