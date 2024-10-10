#include <stdio.h>

/* 

23.	Cada degrau de uma escada tem X de altura. Faça um programa que
receba essa altura e a altura que o usuário deseja subindo a escada.
Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo,
sem se preocupar com a altura do usuário.

*/

int main() {
    
    float alt_desejada,x;
    
    printf("Digite a altura dos degraus: \n");
    scanf("%f", &x);
    
    printf("Digite a altura que o usuario deseja: \n");
    scanf("%f", &alt_desejada);
    
    if(alt_desejada>x){
        printf("Falta %.2f para chegar \n",alt_desejada/x);
    }
    else if(alt_desejada<x){
        printf("Ultrapassou \n");
    }
    else{
        printf("Chegou ao seu destino \n");
    }
    
    return 0;
}
