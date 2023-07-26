#include<stdio.h>
#include<stdlib.h>
int main()
{
   //defenindo variavel 
float a;
// user introduz o numero
printf("indique o numero\n\n");
scanf("%f",&a);

//comparação logica
if (a>10 && a<15)
{
    printf("\nO numero que escolheu eh %.2f\t\t A variavel esta entre 10 e 15\n",a);
}else{
    printf("\nO numero que escolheu eh %.2f\t\t A variavel nao esta ente 10 e 15\n",a);
}


// comparação OU
if (a>10 || a>15)
{
    printf("\nO numero que escolheu eh %.2f\t\t A variavel eh maior que 10 ou maior 15\n",a);
}





    system("pause");
    return 0;
}
