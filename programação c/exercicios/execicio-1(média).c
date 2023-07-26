#include<stdio.h>
#include<stdlib.h>

main(){

// média


float a,b; // dois numeros inteiros
printf("Indique 2 numeros para resolverlmos a media desses numeros?\n");// mensagem ao user
scanf("%f", &a);//primeiro numero
scanf("%f",&b);//segundi numero
printf("os numeros que escolheu eh %.2f e %.2f e a sua media eh = %.2f\n",a,b,(a+b)/2);// mensagem retornada ao user


system("pause");

}