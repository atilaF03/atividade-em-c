#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main (){
int idade;
printf ("DIGITE SUA IDADE:");
scanf("%d", &idade);

if(idade >= 18 ){
printf(" acesso liberado");
}
if(idade<18)
printf("acesso negado ");

return 0;
}




