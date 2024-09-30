/**************************

8.	Receba dois números:
o primeiro deve ser maior que 10 e menor que 25,
o segundo deve ser maior ou igual a zero,
o terceiro deve ser a soma dos dois primeiros 
e o quarto é o produto dos três números anteriores.

Calcule e exiba a soma dos quadrados de cada um dos quatro números.
Caso o resultado seja menor que 50000, solicite novos dados. 


***************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1,num2,num3,num4;
    int resultado;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    
    if(num1<10 || num1>25){
    printf("O numero nao pode ser menor que 10 e maior que 25, digite novamente. \n");
    scanf("%d", &num1);
    }
    
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    
    if(num2<0){
    printf("O numero nao pode ser menor que 0, digite novamente. \n");
    scanf("%d", &num2);
    }
    
    num3 = num1 + num2;
    
    num4 = num1 * num2 * num3;
    
    resultado = num1 * num1 + num2 * num2 + num3 * num3 + num4 * num4;
    
    printf("O resultado foi: %d \n",resultado);
    
    if(resultado<50000){
        printf("Digite novos dados!!");
    }
    else{
        return 0;
    }

}
