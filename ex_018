/******************************************************************************

18.	Receba três números que garantam a existência de uma equação do 2º grau.
Se houver raízes reais exiba-as, caso contrário informe ao usuário.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1,num2,num3;
    int delta,resultado,raiz_1,raiz_2;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    
    printf("Digite o segundo numero: \n");
    scanf("%d", &num3);
    
    if(num1 == 0){
        printf("O primeiro numero nao pode ser 0");
        return 0;
    }
    
    delta = num2 * num2 - 4 * num1 * num3;
    
    raiz_1 = (-num2 + delta) / (2 * num1);
    
    raiz_2 = (-num2 - delta) / (2 * num1);
    
    if(raiz_1<0){
        printf("x1 nao tem raiz real \n");
    }
    else{
        printf("A raiz x1 da equacao e: %d \n",raiz_1);
    }
    
    if(raiz_2<0){
        printf("x2 nao tem raiz real");
    }
    else{
        printf("A raiz x2 da equacao e: %d \n",raiz_2);
    }
    
}
