/**************************

5. O custo ao consumidor de um carro novo é a soma do preço da fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica.
Faça um programa que receba via teclado: O preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:
a.	O valor correspondente ao lucro do distribuidor
b.	O valor correspondente aos impostos
c.	O preço final do veículo


***************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float preco;
    float preco_final;
    int perc_lucro;
    int perc_imposto;

    printf("Digite preco de fabrica do carro: \n");
    scanf("%f", &preco);
    
        while (preco <= 0) {
        printf("O preco tem que ser maior que 0. Digite novamente! \n");
        scanf("%f", &preco);
    }
    
    printf("Digite o percentual do lucro: \n");
    scanf("%d", &perc_lucro);
    
    printf("Digite o percentual do imposto: \n");
    scanf("%d", &perc_imposto);
    
    preco_final = (preco * perc_lucro/100 * perc_imposto/100) + preco;

    printf("O preco final do carro foi: %.2f\n", preco_final);

}
