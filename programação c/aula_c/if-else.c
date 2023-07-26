#include<stdio.h>
#include<stdlib.h>

int main()
{
   //definir variaveis
   int a;
   printf("indique um valor\n");
   scanf("%d",&a);

if (a==5)
{
    printf("a eh igual a 5 \n");
   
}else{
    printf("a nao eh igual a 5 \n");
}
if (a % 2 == 1)
{
    printf("o numero eh impar\n");
}else{

    printf("o numero eh par\n");
}


   system("pause");
    return 0;
}
