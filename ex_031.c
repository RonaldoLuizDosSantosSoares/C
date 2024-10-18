/******************************************************************************

5. Armazene num vetor dez números positivos. Exiba o conteúdo do vetor.
Mostre o maior número, quantas vezes ele foi digitado e em que posições ele apareceu dentro do vetor.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
    int cont,maior,cont_maior;
    
    printf("Digite 10 numeros positivos \n");
    
    for(cont=0;cont<10;cont++){
        do{
        scanf("%d",&vet[cont]);
        if(vet[cont]<0){
            printf("Digite valores positivos \n");
        }
        }while(vet[cont]<0);
    }

    system("clear");

    printf("Conteudo do vetor \n");
    for(cont=0;cont<10;cont++){
    printf("Numeros|posicao %d|%d \n",vet[cont],cont);
    }
    
    maior = vet[0];
    for(cont=0;cont<10;cont++){
        if(vet[cont]>maior){
            maior = vet[cont];
        }
    }
    
    printf("O maior numero foi %d \n",maior);
    
    for(cont=0;cont<10;cont++){
        if(vet[cont]==maior){
            cont_maior++;
        }
    }
    
    printf("O valor se repetiu %d \n",cont_maior);
    
}
