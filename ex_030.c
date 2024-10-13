/******************************************************************************

4.	Faça um programa que armazene num vetor 6 números negativos.
Calcule a soma dos seus quadrados; se a soma for inferior a 1000 solicite novos dados.
Mostre somente a soma que satisfaz a condição.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    int vet[6];
    int soma_quadrado;
    
    do{
    printf("Se a soma do quadrado dos numeros for inferior a 1000, o programa vai solicitar novos valores \n");
    printf("Digite 6 numeros negativos, nao pode ser positivo: \n");
        
    for(cont=0;cont<6;cont++){
    scanf("%d",&vet[cont]);
    
    if(vet[cont]>=0){
        printf("Digite valores menores que zero: \n");
    }
    
    }
    
    system("clear");
    
    soma_quadrado = vet[0]*vet[0] + vet[1]*vet[1] + vet[2]*vet[2] + vet[3]*vet[3] + vet[4]*vet[4] + vet[5]*vet[5];
    
    system("clear");
    
    }while(soma_quadrado<1000);
    
    printf("A soma do quadrado dos numeros foi: %d \n \n",soma_quadrado);
    
}
