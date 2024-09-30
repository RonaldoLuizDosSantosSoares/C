/******************************************************************************

16.	Receba dois valores a e b e os escreve com a mensagem: "São pares " ou "São ímpares".

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    static int cont;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &a);
    
    printf("Digite o segundo valor: \n");
    scanf("%d", &b);
    
    if(a%2==0){
        cont = cont + 1;
    }
    else{
        cont = cont + 2;
    }
    
    if(b%2==0){
        cont = cont + 1;
    }
    else{
        cont = cont + 2;
    }
    
    if(cont==4){
        printf("Sao impares");
        return 0;
    }
    
    if(cont==2){
        printf("Sao pares");
        return 0;
    }
    
    if(cont!=2 || cont!=4){
        printf("Um e par e outro impar");
        return 0;
    }
}
