/******************************************************************************

2.	Receba doze números positivos e armazene no vetor A.
Após a alimentação de todos os números mostre apenas os números maiores que 121 que estão armazenados no vetor.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[12];
    int cont;
    
    printf("Digite 12 numeros para o vetor: \n");
    
    
    for(cont=0;cont<12;cont++){
        scanf("%d",&A[cont]);
    }
    
    system("clear");

    printf("Os numeros maiores que 121 foram: \n");

    for(cont=0;cont<12;cont++){
        
    if(A[cont]>121){
    printf("Numero: %d \n",A[cont]);
    }
    
    }

}
