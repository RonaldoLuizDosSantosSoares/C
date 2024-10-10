/******************************************************************************

1.	Leia quinze elementos de um vetor. Após a alimentação mostre todos os elementos armazenados no vetor.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[15];
    int cont;
    
    printf("Digite 15 elementos para o vetor \n");
    
    
    for(cont=0;cont<15;cont++){
        scanf("%d",&A[cont]);
    }
    
    system("clear");

    printf("Os elementos digitados foram os seguintes: \n");

    for(cont=0;cont<15;cont++){
    printf("O elemento %d foi: %d \n",cont+1,A[cont]);
    }

}