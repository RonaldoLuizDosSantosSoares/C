/******************************************************************************

10.	Leia o preço de um produto
e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float preco;
    
    printf("Digite o preco de um produto: \n");
    scanf("%f", &preco);
    
    if(preco>=100){
        preco = (preco * 20/100) + preco;
    }
    else{
        preco = (preco * 10/100) + preco;
    }

    printf("O preco inflacionado foi: %.2f \n",preco);
}
