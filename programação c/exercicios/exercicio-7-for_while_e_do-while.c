#include<stdlib.h>
#include<stdio.h>
int main()
{

//contagem regreciva (de 10 até 1) com while, do while e for    
int i=10,a=10,b=10;
while (a>=1)
{
printf("%d\n",a);
a--;
}
do
{
printf("%d\n",b);
b--;
} while (b>=1);

for ( i = 10; i >= 1; i--)
{
  printf("%d\n",i);  
}




    return 0;
}
