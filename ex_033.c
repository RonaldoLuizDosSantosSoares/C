/******************************************************************************

7. O usuário poderá digitar a quantidade de números que ele deseja armazenar no vetor A
desde que esse valor seja superior a 4 e inferior ou igual a 20.
Construa o vetor B da mesma dimensão e com os mesmos elementos do vetor A.
Observando que o primeiro elemento de A passa a ser o último de B,
o segundo elemento de A passa a ser o penúltimo de B e a assim por diante.
Exibir o conteúdo dos dois vetores.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
    

int main()
{
    int A[20],B[20];
    int cont,n;
    
    printf("Digite a quantidade de elementos que deseja \n");
    do{
        scanf("%d",&n);
        if(n<=4 || n>20){
            printf("O valor nao pode ser menor que 4 ou maior que 20, digite novamente \n");
        }
        }while(n<=4 || n>20);
    
    system("clear");
    
    printf("Digite os %d elementos do vetor A:\n", n);
    
    for(cont=0;cont<n;cont++){
        scanf("%d",&A[cont]);
    }

    for (cont = 0; cont < n; cont++)
    {
        B[cont] = A[n - 1 - cont];
    }

    system("clear");
    
    printf("Valores do vetor A: \n");
    for (cont=0;cont<n;cont++){
        printf("%d \n",A[cont]);
        
    }
    
    printf("Valores do vetor B: \n");
    for (cont=0;cont<n;cont++){
        printf("%d \n",B[cont]);
        
    }
    
}
