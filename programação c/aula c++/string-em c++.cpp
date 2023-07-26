#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include <string>

// esta função evita de estar a colucar sempre o "std ::" antes do cin, cout e string"
using namespace std;


int main()
{

    // definindo uma string
string palavra;
// imprimindo na tela pode ser 2 maneiras

   //printf("escreva uma palavra\n"); ou
   cout << "Escreva uma palavra\n";


cin>> palavra;


cout << "A palavra eh :"<<palavra;







    return 0;
}
