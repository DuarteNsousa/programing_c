#include<stdio.h>
#include<stdlib.h>
#define TAM 3


int main()


{
int vetor[TAM],i;
// passar valores para os vetores
vetor[0]=5;
vetor[1]=10;
vetor[2]=15;

// exebir os vetores
printf("posicao 0 no vetor eh %d\n",vetor[0]);
printf("posicao 0 no vetor eh %d\n",vetor[1]);
printf("posicao 0 no vetor eh %d\n",vetor[2]);

// impriminfo no laço de repetição

for ( i = 0; i < TAM; i++)
{
    printf(" Posicao do %d : %d\n",i,vetor[i]);
}
// lendo 3 valores e mudando os valores dos
for ( i = 0; i < TAM; i++)
{
  scanf("%d",&vetor[i]);
}
// imprimindo laço de repiteção
for ( i = 0; i < TAM; i++)
{
  printf(" Posicao do %d : %d\n",i,vetor[i]); 
}





    system("pause");
    return 0;
}
