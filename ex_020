/******************************************************************************

20.	Escrever um algoritmo que leia três números quaisquer
e informe qual é o maior e se eles forem todos igual informe ao usuário e solicite novos dados.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int a,b,c;
    int cont;
    
    
    do{
    printf("Digite o primeiro valor: \n");
    scanf("%d",&a);
    
    printf("Digite o segundo valor: \n");
    scanf("%d",&b);
    
    printf("Digite o terceiro valor: \n");
    scanf("%d",&c);
    
    if(a>b & a>c){
        printf("O primeiro valor (%d) e maior que os demais \n",a);
        cont = 0;
    }
    
    if(b>a & b>c){
        printf("O segundo valor (%d) e maior que os demais \n",b);
        cont = 0;
    }
    
    if(c>b & c>a){
        printf("O terceiro valor (%d) e maior que os demais \n",c);
        cont = 0;
    }
    
    if(a==b & b==c & a==c){
        printf("Os valores sao iguais: (%d) , (%d) , (%d) \n",a,b,c);
        printf("Digite novos valores abaixo \n \n");
        cont = 1;
    }
    
    }while(cont==1);


}
