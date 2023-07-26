#include<stdio.h>
#include<stdlib.h>
//crie um programa que veja a média de 3 notas e mostre se esta aprovado
int main()
{
float nota1, nota2, nota3;
printf("insira 3 notas\n");
scanf("%f %f %f", &nota1, &nota2, &nota3);

if ((nota1+nota2+nota3)/3>=9.5)
    {
    printf("A media do aluno eh %.2f e foi aprovado\n",(nota1+nota2+nota3)/3 );
    }
else{

    printf("O aluno teve a media de %.2f e foi reprovado\n",(nota1+nota2+nota3)/3);

    }




    system("pause");
    
    return 0;
}
