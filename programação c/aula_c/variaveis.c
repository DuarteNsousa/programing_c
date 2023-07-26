#include<Stdio.h>
#include<stdlib.h>
#include<Locale.h>

main(){
setlocale(LC_ALL,"");
// imprimindo Olá
printf("Olá\n");
//lendo numero inteiro

int a=50;
printf("o valor de 'a'= %d\n",a);
scanf("%d",&a);// guarda na memória
printf("\nagora o valor de 'a' mudou para :%d \n",a);// o scanf fez com que mudassemos o valor de a inifial pois introdusimos novo numero.

// lendo numero com virgula
 float b = 5.5;
    printf("O valor de b é = %f \n", b);
    scanf("%f", &b);
    printf("\nO valor de a mudou para %f", b);

//lendo letras

char c='d';
printf("o valor de 'c'= %c\n",c);
fflush(stdin);//limpando Buffer
scanf("%c",&c);// guarda na memória
printf("\nagora o valor de 'c' mudou para :%c \n",c);

system("pause");
}
