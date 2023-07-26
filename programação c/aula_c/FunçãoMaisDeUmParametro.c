#include<stdio.h>
#include<stdlib.h>

void mostraSoma(int primeiroValor,int SegundoValor){
printf("A soma entre %d e %d eh %d\n",primeiroValor,SegundoValor,primeiroValor+SegundoValor );
}

int main()
{
//variavel
int a=5, b=7,c=12,d=5;

//função que mostra a soma
mostraSoma(a,b);

mostraSoma(c,d);

    return 0;
}
