#include<stdio.h>
#include<stdlib.h>


main(){

    
// usuario vai dicidir numeros de vetores
int num;
    printf("Indique o numero de vetores?\n");
    scanf("%d",&num);

// funcionameno do programa
int i;
float media,vetor[num],soma;
// separando 
printf("Vamos agora digitar os valores\n");
// dando o utilizador por os valoes dos vetores
for ( i = 0; i < num; i++)
{
    printf("\nIndique o valo:");
scanf("%f",&vetor[i]);// vai gravar o ciclo dos numeros nos vetores
soma=soma + vetor[i];// adicionamos o ciclo da soma
}
// imprimindo os valores nas n posições dos vetores
for ( i = 0; i < num; i++)
{
  printf("\nO valor do posicao %d eh %.2f\n\n",i,vetor[i]);
 
}

// media
media = (soma) / num;

printf("\n\nA media eh media =%.2f\n",media);

system("pause");
return 0;
}