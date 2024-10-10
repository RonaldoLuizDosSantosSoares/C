/**************************

6.	Elabore um programa que receba o salário de um funcionário e calcule o reajuste desse salário.
Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais.
Se o salário for maior ou igual a 800 e menor ou igual a 1000, seu reajuste será de 10 %;
caso seja maior que 1000, o reajuste deve ser de 5%.
Ao final do programa deve apresentar o valor antigo e o novo salário.


***************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float sal;
    float reajuste;


    printf("Digite o salario do funcionario: \n");
    scanf("%f", &sal);
    
        while (sal <= 0) {
        printf("O salario tem que ser maior que 0. Digite novamente! \n");
        scanf("%f", &sal);
    }
    
    if(sal>=800 && sal<=1000){
        reajuste = (sal * 10/100) + sal;
    }
    else{
        if(sal>1000){
            reajuste = (sal * 5/100) + sal;
        }
    else{
        printf("Salario abaixo de 800 nao recebe reajuste \n");
        return 0;
    }
        
    }

    printf("O salario do funcionario apos o reajuste e: %.2f\n", reajuste);

}
