#include<stdio.h>
#include<stdlib.h>

int main()
{// numeros primos
   int i,valor,aux=0;
printf("indica um valor para ver se o numero eh primo\n");
scanf("%d",&valor);


for ( i = 1; i <= valor; i++)
{if (valor % i == 0)
{//conferir quantas vezes tem o valor 0 
   aux ++;
}
printf("%d / %d tem o resto %d\n",valor,i,valor%i);
 
}
if (aux==2)

{
printf(" \nO valor %d eh primo\n",valor);
}else{
    printf("\nO numero %d nao eh primo\n",valor);

}
printf("\nTem %d vezes com o restos  0\n",aux); 






    return 0;
}
