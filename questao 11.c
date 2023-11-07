#include <stdio.h>
#include <string.h>

int main() {
    char codigoAcessoCorreto[] = "codigo123";  // Substitua com o c�digo de acesso correto
    char codigoInserido[50];  // Alocamos espa�o para a string do c�digo de acesso

    while (1) {
        printf("Digite o c�digo de acesso: ");
        scanf("%s", codigoInserido);

        if (strcmp(codigoInserido, codigoAcessoCorreto) == 0) {
            printf("Acesso permitido. Bem-vindo!\n");
            break;  // Sai do loop quando o c�digo correto � inserido
        } else {
            printf("C�digo de acesso incorreto. Tente novamente.\n");
        }
    }

    return 0;
}


