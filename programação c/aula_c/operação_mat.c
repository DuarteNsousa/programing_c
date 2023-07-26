#include<stdio.h>
#include<stdlib.h>

main(){
//definirndo variaveis

int a,b;
a=6; b=3;
//soma

printf("a soma de %d e %d =             \t%d\n",a,b,a+b);
//subtracao

printf("a subtracao de %d e %d =        \t%d\n",a,b,a-b);

//divisao

printf("a divisao de %d e %d =          \t%d\n",a,b,a/b);
//multiplicação

printf("a multiplicacao de %d e %d =    \t%d\n",a,b,a*b);

//resto da divisao

printf("o resto da divisao de %d e %d = \t%d\n",a,b,a%b);

//valor Absoluto
printf("o valor absoluto de -23=%d\n",abs(-23));

system("pause");

}