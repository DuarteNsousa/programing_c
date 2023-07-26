#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j=10,h=10;

printf("usando o for e o if\n");
for ( i = 10; i<=20; i++)
{if (i%2==0)
{
 printf("O numero %d eh par\n",i);
}else{
    printf("O numero %d eh impar\n");
}

    
}
printf("usando o while usando o if\n");
while (j<=20) 
{

 if (j%2==0)
 {
  printf("%d\n",j);
 }// se quisecemos ver os impares ponhamos o else como foi posto no for
 j++;   
}
printf("usando o do while usando o if\n");
do
{if (h%2==0)
{
printf("%d\n",h);
}
h++;
} while (h<=20);




system("pause");
    return 0;
}
