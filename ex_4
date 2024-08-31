/**************************

4. Cálculo de um salário líquido de um professor.
Serão fornecidos via teclado o valor da hora aula,
o número de aulas dadas e o desconto do INSS.

***************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float sal;
    float val_hr_aula;
    int num_aulas;
    int desconto;

    printf("Digite o valor da hora aula: \n");
    scanf("%f", &val_hr_aula);
    
        while (val_hr_aula <= 0) {
        printf("O valor tem que ser maior que 0. Digite novamente: \n");
        scanf("%f", &val_hr_aula);
    }
    
    printf("Digite o numero de aulas dadas: \n");
    scanf("%d", &num_aulas);
    
    printf("Digite o desconto do INSS: \n");
    scanf("%d", &desconto);
    
    sal = (val_hr_aula * num_aulas) - desconto/100;

    printf("O salario do professor foi: %.2f\n", sal);

}
