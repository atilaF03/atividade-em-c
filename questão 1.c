#include <stdio.h>

int main() {
    float temperatura;
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura > 25) {
        printf("Clima: Ensolarado\n");
    }

    else if (temperatura < 15) {
        printf("Clima: Chuvoso\n");
    }

    else {
        printf("Clima: Nublado\n");
    }
    
    return 0;
}


