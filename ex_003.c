/**************************

3. Solicite ao usuário o preço de um carro e calcule o novo preço com desconto de 9%.

***************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float val;
    float val_final;
    const int desconto = 9;

    printf("Digite o preco de um carro: \n");
    scanf("%f", &val);

    while (val <= 0) {
        printf("O valor tem que ser maior que 0. Digite novamente: \n");
        scanf("%f", &val);
    }

    val_final = val - (val * desconto / 100);

    printf("O preco ficou com %d%% de desconto: %.2f\n", desconto, val_final);

}
