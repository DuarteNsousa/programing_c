#include<stdlib.h>
#include<stdio.h>

int main(){
// fazer um menu que o user poe 2 valores e escolhe a opção
float num1,num2,res;
int op;

while (op<1 || op>6)
{
//Criar um menu de informação para o utilizador
printf("1 opcao  \t= soma\n2 opcao  \t= subtracao\n3 opcao  \t= divisao\n4 opcao  \t= multiplicacao\n5 opcao  \t= multiplica o primeira opcao por 2 e depois subtrai o segundo\n6 opcao  \t= multiplica o primeira opcao por 2 e depois divide o segundo \n\n\n");
//o utilizador vai por 2 numeros e escolher a opcão
printf("\nIntruduz um numero\n\n");
scanf("%f", &num1);
printf("\nIntruduz mais um numero\n\n");
scanf("%f", &num2);
printf("\nescolhe a opcao de 1 a 6\n\n");
scanf("%d",&op);

// menu de opção
switch (op)
{   
case 1:  res=num1+num2;
    printf("\nA sua opcao foi a soma\n"); 
    break;
case 2: res= num1-num2;
    printf("\nA sua opcao foi a subtracao");
    break;
case 3:  res=num1/num2;
    printf("\nA sua opcao foi a divisao\n");
    break;
case 4:  res=num1*num2;
    printf("\nA sua opcao foi a multiplicacao\n"); 
    break;
case 5: res=(2*num1)-num2;   
    printf("\nmultiplica o primeira opcao por 2 e depois subtrai o segundo\n");
    break;
case 6: res=(2*num1)/num2;
    printf("\nmultiplica o primeira opcao por 2 e depois divide o segundo\n");
    break;
default:
    printf("\nopcao ivalida.");
    break;


}

printf("\nEntao o resultado = %.2f.\n",res);

}








}