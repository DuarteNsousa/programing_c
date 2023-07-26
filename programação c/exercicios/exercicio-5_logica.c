#include<stdio.h>
#include<stdlib.h>

int main()
{
//crie um programa que consiga ver se o triangulo é equilatero 3 lados iguais.
int a,b,c;
printf(" indique 3 numeros iguais ou diferentes para ver o tipo de triangulo\n");
scanf("%d %d %d",&a,&b,&c);


if ((a==b) && (b==c))// 2 condições


{
     printf("tem 3 lados iguais,eh um triangulo equilatero.\n");

}else{
    //analisa se tem pelomenos 2 lados iguais
    if ((a==b)||(b==c) || (c==a))
{
    printf("eh um triangulo isosceles, tem 2 lados iguais e um diferente.\n");
}else{
//se não tem nenhuma das anteriores vai imprimir escaleno
    printf("nao tem 3 lados diferentes, eh um triangulo escaleno.\n");
}
}

system("pause");
    
    
}
