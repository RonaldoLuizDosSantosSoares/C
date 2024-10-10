/******************************************************************************

3.	Leia oito elementos e armazene-os no vetor A.
Construa o vetor B de mesma dimensão com os elementos do vetor A multiplicados por 3.
Apresente o conteúdo dos dois vetores.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[8];
    int B[8];
    int cont;
    
    printf("Digite 8 numeros para o vetor: \n");
    
    
    for(cont=0;cont<8;cont++){
        scanf("%d",&A[cont]);
    }
    
    system("clear");

    printf("Vetores A: \n");
    
    for(cont=0;cont<8;cont++){
        
    printf("Vetor A: %d \n",A[cont]);
    
    B[cont] = 3*A[cont];
    
    printf("Vetor B: %d \n",B[cont]);
    
    }

}
