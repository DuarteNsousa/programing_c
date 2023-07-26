#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
//variavel
 int a= 20;

 //imprimindo 

printf("O valor eh :%d\n",a);

//lendo uma valor um valor novo

scanf("%d",&a);
// imprimindo o novo valor de a
printf("o valor novo eh :%d\n",a);

// variaveis armazenam valores 
//Pontriros armazenam posições do ponteiro


// variavel
int b=10;
// ponteiro
int * ponteiro;// pode ser outro nome
// ponteiro recebendo a posição b
ponteiro =&b;
printf("o valor de b eh :%d\n",b);
//o "*"" lendo como contiudo apontado por

*ponteiro=40;


// o novo valor dado pelo ponteiro
printf("o novo valor de b eh :%d\n",b);

    return 0;
}

