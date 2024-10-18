/******************************************************************************

6. Leia o vetor A de uma dimensão máxima de 15 elementos.
O usuário poderá digitar a quantidade desejada desde que o valor seja inferior ou igual a 15.
Construir um vetor B de mesmo tipo, de modo que cada elemento do vetor B seja fatorial do elemento correspondente do vetor A.
Apresentar o conteúdo dos dois vetores.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    int fat = 1;
    for (int cont = 1;cont<= n;cont++){
        fat *= cont;
    }
    return fat;
    
    
}

int main()
{
    int A[15],B[15];
    int cont,n;
    
    printf("Digite a quantidade de elementos que deseja \n");
    do{
        scanf("%d",&n);
        if(n>=15){
            printf("O valor nao pode ser maior ou igual a 15, digite novamente \n");
        }
        }while(n>=15);
    
    system("clear");
    
    printf("Digite os %d elementos do vetor A:\n", n);
    
    for(cont=0;cont<n;cont++){
        printf("Elemento %d: ",cont+1);
        scanf("%d",&A[cont]);
    }

    system("clear");
    
    for (cont=0;cont<n;cont++){
        B[cont] = fatorial(A[cont]);
    }
    
    printf("Valores do vetor A: \n");
    for (cont=0;cont<n;cont++){
        printf("%d \n",A[cont]);
        
    }
    
    printf("Valores do vetor B: \n");
    for (cont=0;cont<n;cont++){
        printf("%d \n",B[cont]);
        
    }
    
}
