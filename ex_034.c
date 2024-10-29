/******************************************************************************

8. Leia três vetores (A, B e C) de uma dimensão com 5 elementos cada.
Construa o vetor D, sendo este a junção dos três outros vetores.
Armazene no vetor D o primeiro elemento do vetor A depois do B e do C e assim sucessivamente.
Apresentar o conteúdo de todos os vetores. Exiba quantas vezes apareceram números negativos no vetor D.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
    

int main()
{
    int A[5],B[5],C[5],D[15];
    int cont,cont_negativo;
    
    printf("Digite os 5 elementos do vetor A:\n");
    
    for(cont=0;cont<5;cont++){
        scanf("%d",&A[cont]);
    }
    
    system("clear");
    
    printf("Digite os 5 elementos do vetor B:\n");
    
    for(cont=0;cont<5;cont++){
        scanf("%d",&B[cont]);
    }
    
    system("clear");
    
    printf("Digite os 5 elementos do vetor C:\n");
    
    for(cont=0;cont<5;cont++){
        scanf("%d",&C[cont]);
    }


for(cont = 0; cont < 5; cont++)
{
    D[cont * 3] = A[cont];

    // Armazena A[cont] em D na posição cont * 3

    D[cont * 3 + 1] = B[cont];
    
    // Armazena B[cont] em D na posição cont * 3 + 1
    
    D[cont * 3 + 2] = C[cont]; 
    
    // Armazena C[cont] em D na posição cont * 3 + 2
    
}

    system("clear");
    
    printf("Valores do vetor A: \n");
    for (cont=0;cont<5;cont++){
        printf("%d \n",A[cont]);
        
    }
    
    printf("Valores do vetor B: \n");
    for (cont=0;cont<5;cont++){
        printf("%d \n",B[cont]);
        
    }
    
    printf("Valores do vetor C: \n");
    for (cont=0;cont<5;cont++){
        printf("%d \n",C[cont]);
        
    }
    
    printf("Valores do vetor D: \n");
    for (cont=0;cont<15;cont++){
        printf("%d \n",D[cont]);
        if(D[cont]<0){
            cont_negativo++;
        }
    }

    printf("Quantidade de valores negativos: %d",cont_negativo);
        
    }
