int main() {
    int num, i, flag = 0;
  
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
  
    switch (num) {
        case 0:
        case 1:
            flag = 1;   // 0 e 1 não são primos
            break;
        case 2:
            flag = 0;   // 2 é um número primo
            break;
        default:
            for (i = 2; i <= num / 2; ++i) {
                if (num % i == 0) {
                    flag = 1;   // número não é primo
                    break;
                }
            }
    }
  
    if (flag == 0)
        printf("Número primo.\n");
    else
        printf("Número não primo.\n");
  
    return 0;
}

