#include <stdio.h>

/* 

24.	O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde
para dar uma indicação sobre a condição de peso de uma pessoa adulta.
A fórmula é IMC = peso / (altura)2.
Elabore um algoritmo que leia o peso e a altura de um adulto e mostre sua condição

*/

int main() {
    
    float peso,altura,imc;
    
    printf("Programa para calcular o IMC \n");
    printf("Digite o peso: \n");
    scanf("%f", &peso);
    
    printf("Digite a altura: \n");
    scanf("%f", &altura);
    
    imc = peso/(altura*2);
    
    if(imc<17){
        printf("Muito abaixo do peso \n");
    }
    else if(imc>=17 & imc<=18.49){
        printf("Abaixo do peso \n");
    }
    else if(imc>=18.5 & imc<=24.99){
        printf("Peso normal \n");
    }
    else if(imc>=25 & imc<=29.99){
        printf("Acima do peso \n");
    }
    else if(imc>=30 & imc<=34.99){
        printf("Obesidade I \n");
    }
    else if(imc>=35 & imc<=39.99){
        printf("Obesidade II (severa) \n");
    }
    else{
        printf("Obesidade III (morbida) \n");
    }
    
    return 0;
}
