#include<stdio.h>
#include<stdlib.h>
// função system
void limpaTela(){
system("cls");

}



int main()
{
//variavel
int a;
//imprimindo
printf("escreva um valor 'a'\n");

scanf("%d",&a);

//limpar a tela
limpaTela();

//imprimindo Fim do Programa
printf("O valor digitado foi:%d\nFim do Programa\n",a);




    return 0;
}
