/******************************************************************************

2.	Receba via teclado um número positivo e exiba esse valor com reajuste de 10%.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int imposto;
    float reajuste, num;
    
    printf("Digite um numero positivo \n");
    scanf("%f", &num);
    
    do{
    
    system("clear");
    printf("O numero tem que ser positivo e maior que 0, Digite novamente! \n");
    scanf("%f", &num);
    
    }while(num <= 0);
    
    imposto = 10;
    reajuste = (num * imposto/100) + num;
    
    system("clear");
    printf("O numero reajustado ficou: %.2f \n",reajuste);

}
