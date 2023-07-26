#include<stdio.h>
#include<stdlib.h>

//função 
int retornaDez(){
    printf("Vai retornar o numero da funcao que eh: ");
    return 10;
}
// chama a função depois do main
float retornaQuebrado();


int main()
{
// definindo variavel
int a;

// passando um returno de uma função para uma variavel
a=retornaDez();

// imprimindo
printf("%d\n",a);


float b;//definindo variave
b=retornaQuebrado();//função

printf("%.2f\n",b);//imprimindo


    return 0;
}
 //podemos escrever a função depois do main mas tem que colocar o nome da função antes do main
float retornaQuebrado(){
    printf("A funcao vai retornar o numero quebrado que eh :");


float numero=12.5;// dando um nome igualando um valor e depois chamar no retur pelo nome dado (numero)

return numero;// aqui tambem podemos fazer operações numericas tipo: "numero +2", "numero * 10", etc.
   
}

