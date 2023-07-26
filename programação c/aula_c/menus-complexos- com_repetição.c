#include<stdlib.h>
#include<stdio.h>

int main()
{
// definindo variavel
int opcao;


//vai fazer uma verificação caso invalido repete o ciclo
while (opcao <1 || opcao>3)
{
printf("difina uma opcao\n\n\n");
printf("-\topcao 1\n");
printf("-\topcao 2\n");
printf("-\topcao 3\n");
//lendo a opção
scanf("%d",&opcao);
//resultado da oção escolhida
switch (opcao)
{
case 1 :
 printf("opcao escolhida foi a 1\n");
    break;
    case 2 :
 printf("opcao escolhida foi a 2\n");
    break;
    case 3 :
 printf("opcao escolhida foi a 3\n");
    break;

default:
 printf("nenhuma opcao escolhida\n");
    break;
}
}

















    
 system("pause");
    return 0;
}
