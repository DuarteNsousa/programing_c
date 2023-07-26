#include<stdio.h>
#include<stdlib.h>
//numeros aleatorios precisa de uma nova biblioteca
#include<time.h>
int main()
{//numeros aleatorios
// parte alementar uma um reandel

srand((unsigned) time (NULL));
//variavel recebe o resto da divisao

int aleatorio=(rand() % 3);// numero aleatorio entre 0 e 2
printf("%d\n",aleatorio);

// variavel recebe a divisao por 5
int aleatoriosegundo=(rand() % 5) +1;// numero aleatorio entre 1 e 5
printf("%d\n",aleatoriosegundo);


// numero aleatorios serve por exemplo o valor de dados para um jogo.



system("pause");
    return 0;
}
