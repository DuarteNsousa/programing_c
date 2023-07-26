#include<stdio.h>
#include<stdlib.h>
void mostraSucessor(int numero){

    printf("O sucessor de %d eh %d\n",numero,numero+1);// 0 "numero" é dado pela variavel "a" do main
 }
int retornaAntecessor(int numero){
return numero -1;

}

int main()
{
// definindo variaveis
int a;
printf("digite um valor\n");
scanf("%d",&a);//gravando valor de "a"

mostraSucessor(a);//vai buscar a função e imprime o valor de "a" no printf da função


printf("o antecessor de %d eh %d\n",a,retornaAntecessor(a));// vai a função retornaAntecessor

    return 0;
}
