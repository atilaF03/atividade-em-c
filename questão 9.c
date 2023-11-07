int main() {
    int num, i, flag = 0;
  
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);
  
    switch (num) {
        case 0:
        case 1:
            flag = 1;   // 0 e 1 n�o s�o primos
            break;
        case 2:
            flag = 0;   // 2 � um n�mero primo
            break;
        default:
            for (i = 2; i <= num / 2; ++i) {
                if (num % i == 0) {
                    flag = 1;   // n�mero n�o � primo
                    break;
                }
            }
    }
  
    if (flag == 0)
        printf("N�mero primo.\n");
    else
        printf("N�mero n�o primo.\n");
  
    return 0;
}

