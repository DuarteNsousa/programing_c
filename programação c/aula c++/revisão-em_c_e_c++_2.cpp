#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<iostream>//biblioteca para c++
#include<string>//biblioteca para c++

int main()
{

// definindo vetores

int vetor[3],i,a,b;

//passando valores para as posições

vetor[0]=10;
vetor[1]=15;
vetor[2]=20;

printf("%d\n%d\n%d\n",vetor[0],vetor[1],vetor[2]);

// outra maneira de apresentar os valores dos vetores, mais utilizada

for ( i = 0; i < 3; i++)
{
printf("o valor na posicao do %d eh %d\n",i,vetor[i]);
}

// agora em c++
for ( i = 0; i < 3; i++)
{
std:: cout<<vetor[i]<<"\n";
}

// usando o while em C
// renecia a nova contagem temos de por o i a 0
i=0;
while (i<3)
{
printf("o valor na posicao do %d eh %d\n",i,vetor[i]);    
i++;
}
// usando o while em c++

i=0;
while (i<3)
{
std:: cout<<vetor[i]<<"\n";  
i++;
}
// matrizes em c


int matriz[2][2];
// definindo os valores
for ( a = 0; a < 2; a++)
{
    for ( b = 0; b < 2; b++)
    { printf("\nIndica o valor para a posicao [%d][%d]:",a,b);
    scanf("%d",&matriz[a][b]);
    }
  
}
// imprimindo a matriz em c
printf(" %d %d\n", matriz[0][0], matriz[0][1]);
printf(" %d %d\n", matriz[1][0], matriz[1][1]);









    return 0;
}
