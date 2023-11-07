#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "portuguese");

int idioma;

printf("escolha um idioma:");
scanf ("%d",&idioma);

switch (idioma)
{
case 1:
    printf("Inglês");
    system("cls || clear");
    printf("welcome, you can continue");
    break;
case 2:
    printf("Espanhol");
     system("cls || clear");
    printf("bienvenido, puedes continuar");
    break;
case 3:
    printf("Francês");
     system("cls || clear");
    printf("bienvenue, vous pouvez continuer");
    break;

default:
    break;
}


      return 0;
}
