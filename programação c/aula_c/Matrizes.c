#include<stdio.h>
#include<stdlib.h>

// função para por  *
linha(int num){
int i;
for ( i = 0; i < num; i++)
{
   putchar('*');
 }
}


// função pricipal
int main()
{
//criando uma matriz
int matriz [2] [2],aux1,aux2,i,j;
// incerir valores

for ( i = 0; i < 2; i++)
{for ( j = 0; j < 2; j++)
{   
    printf("\nIndica o valor para a posicao [%d][%d]:",i,j); 
    
    scanf("%d",& matriz [i] [j]);
    
}
}
// o codigo de cima faz a mesma coisa que o codigo da linha 37 a 44


/*printf("Indica o valor na casa [0][0]=");
scanf("%d",& matriz [0] [0]);
printf("\nIndica o valor na casa [0][1]=");
scanf("%d",& matriz [0] [1]);
printf("\nIndica o valor na casa [1][0]=");
scanf("%d",& matriz [1] [0]);
printf("\nIndica o valor na casa [1][1]=");
scanf("%d",& matriz [1] [1]);*/

printf("\n");

linha(15);
printf("\nA tua matriz eh\n");
linha(15);
printf ("\n\n%d %d\n",matriz [0] [0],matriz [0] [1]);
printf ("%d %d\n\n",matriz [1] [0],matriz [1] [1]);


linha(27);// uma finção, por exemplo dividir a matriz
printf("\nA matriz ficou ao contrario\n");
linha(27);
//para por a matriz com posições diferente tivemos de por 2 auxiliares aux1 e aux2
// sem isso perdia-se os valores 
aux1= matriz [0] [0];
aux2= matriz [0] [1];

//invertir posição da matriz
matriz [0] [0]=matriz [1] [0];
matriz [0] [1]=matriz [1] [1];
matriz [1] [0]=aux1;
matriz [1] [1]=aux2;



/*printf ("\n\n%d %d\n",matriz [0] [0],matriz [0] [1]);
printf ("%d %d\n",matriz [1] [0],matriz [1] [1]);*/



printf("\n");
// faz o mesmo desde a linha 71 a 72
for ( i = 0; i < 2; i++)
{for ( j = 0; j < 2; j++)
{printf("%d ",matriz [i]  [j] );

}printf("\n");



}
system("\npause");
    return 0;
}


