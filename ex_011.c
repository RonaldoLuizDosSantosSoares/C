/******************************************************************************

11.	Leia dois números inteiros e mostre o maior deles.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,calculo;
    
    printf("Digite dois numeros inteiros: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    if(a>b){
        printf("O primeiro valor e maior que o segundo \n");
        return 0;
    }
    
    if(a==b){
        printf("Os valores sao iguais \n");
        return 0;
    }
    
    else{
        printf("O segundo valor e maior que o primeiro");
    }
    
}
