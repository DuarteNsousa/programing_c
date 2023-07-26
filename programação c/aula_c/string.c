#include<stdio.h>
#include<stdlib.h>

int main()
{
// variavel
char palavra[255];

//interagir com o usuario

printf("Escreva uma palavra\n");

//limpar Buffer
setbuf(stdin,0);

// Lê a string
fgets(palavra,255,stdin);


// limpar o resto do vetor nao ocupado
palavra [strlen (palavra)-1] == '/0';


printf("%s\n",palavra);

  system("pause");
    
    
    return 0;
}
