#include<stdio.h>
#include<stdlib.h>

main(){

int a,b,c,mult;

printf("indique 3 numeros inteiros\n");
//incerir 3 numeros gravados
scanf("%d %d %d",&a,&b,&c);
// criei um int novo para poder multiplicar os valores de 'a' 'b' e 'c' 

mult=a*b*c;

printf("o valor da multiplivacao dos 3 numeros eh %d\n",mult);
system("pause");

}