/******************************************************************************

19.	- A FATEC RUBENS LARA faz o pagamento de seus professores por hora/aula.
Faça um algoritmo que calcule e exiba o salário de um professor.
Sabe-se que o valor da hora/aula segue a tabela abaixo:
Professor Nível 1 R$55,00 por hora/aula
Professor Nível 2 R$67,00 por hora/aula
Professor Nível 3 R$78,00 por hora/aula.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int nivel,hr_aula;
    float valor_aula;
    
    printf("Digite o nivel do Professor: \n");
    
    do{
    
    printf("O nivel do professor nao pode ser menor ou igual a 0 \n");
    scanf("%d",&nivel);
    
    }while(nivel<=0);
    
    printf("Digite a hora/aula do professor: \n");
    scanf("%d",&hr_aula);
    
    switch(nivel){
        case 1:
        valor_aula = hr_aula * 55.00;
        break;
        
        case 2:
        valor_aula = hr_aula * 67.00;
        break;
        
        case 3:
        valor_aula = hr_aula * 78.00;
        break;
        
        default:
        printf("Nivel nao encontrado, entrar com um novo dado \n");
        break;
   
    }
    
    
    printf("O salario do professor e: %.2f \n",valor_aula);


}
