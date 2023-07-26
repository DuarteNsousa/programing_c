#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<iostream>//biblioteca para c++
#include<string>//biblioteca para c++


// esta função evita de estar a repetir o "std::" sempre antes de uma variavel
// A função : using namespace std;


int main()
{
//defenindo variaveis
int a;
float b;
char c;
bool d;

// dar valor as variaveis
a= 10;
b= 2.5;
c='w';
d= true;

//escrever na tela em c

printf("Valor :%d\n",a);
printf("Valor : %.2f\n",b);
printf("Valor : %c\n",c);
printf("Valor : %d\n",d);

// imprimir os valor em c++ temos de incluir uma biblioteca "iostream e string"

std:: cout<< "ola\n";
std:: cout << "sou o Nuno\n";
std:: cout <<"O valor de a eh:" << a <<"\n";

// lendo valores com C
/*scanf("%d",&a);
scanf("%f",&b);
scanf("%c",&c);
getchar()// e o fflush(stdin),limpa o \n do enter e agora no futuro, poderá ler outros chars sem problema.
scanf("%d",&d);*/

// lendo valores pa c++

std:: cin>> a;
std:: cout<< "\no novo valor de 'a' eh:"<<a<< "!\n";
    return 0;
}
