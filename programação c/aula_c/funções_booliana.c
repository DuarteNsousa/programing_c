#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool retornaBooleana(){

    return false;
}



int main()
{
bool variavelBoleana;// variavel 


variavelBoleana = retornaBooleana();//retorna função 

//printf("%d",variavelBoleana);
// outra maneira de fazer

if (variavelBoleana)
{
   printf("eh verdadeiro\n",variavelBoleana);//se for verdadeiro executa 1º bloco
}else{
    printf("Eh falco:\n");// se for falso executa o 2º bloco
}

    return 0;
}
