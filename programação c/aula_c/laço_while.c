#include<stdio.h>
#include<stdlib.h>
int main()
{
//laço de repetição

// definindo variaveis, contar a té 10
int a=0,b=10;

while (a<=10)
{
   printf("%d\n",a);
   // incremento
   a=a+2;// se for aumentar mais do que 1 valor tem de ser assim
   
}

// contagem ao contrario, do maior para o menor
while (b>=1)
{
   printf("%d\n",b);// é igual a= a-1
   b--;
}


system("pause");
    return 0;
}
