#include <stdio.h>

/* 

26.	Faça um algoritmo que receba o salário a idade, o sexo (1 para masculino e 2 para feminino).
Mostre o sexo, a idade e o salário obtido após o acréscimo do abono

*/

int main() {
    
    int idade,sexo;
    float salario;
    
    printf("Digite o salario: \n");
    scanf("%f", &salario);
    
    printf("Digite a idade: \n");
    scanf("%d", &idade);

    while(sexo!=1 & sexo!=2){
    printf("Digite o sexo, so pode ser 1 ou 2: \n");
    scanf("%d", &sexo);
    }
    
    if(sexo == 1 & idade>=30){
        salario = salario + 200;
    }
    else if(sexo == 1 & idade<30){
        salario = salario + 120;
        
    }
    
    
    if(sexo == 2 & idade>=30){
        salario = salario +220;
    }
    else if(sexo == 2 & idade<30){
        salario = salario + 130;
        
    }
   
    printf("O salario com ajuste e: %.2f \n",salario);
    
    return 0;
}
