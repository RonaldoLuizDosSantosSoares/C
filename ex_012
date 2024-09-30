/******************************************************************************

12.	Leia o número de identificação,
as 3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que fazem parte da avaliação.
Calcular a média de aproveitamento, usando a fórmula:
MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME)/7
A atribuição de conceitos obedece a tabela abaixo:


*******************************************************************************/

#include <stdio.h>

int main()
{
    int Nota1, Nota2, Nota3;
    float MA, ME;
    
    printf("Digite a primeira nota: \n");
    scanf("%d", &Nota1);
    
    while(Nota1>10||Nota1<0){
        printf("A nota nao pode ser menor que 0 ou maior que 10, digite novamente \n");
        scanf("%d", &Nota1);
    }
    
    printf("Digite a segunda nota: \n");
    scanf("%d", &Nota2);
    
        while(Nota2>10||Nota2<0){
        printf("A nota nao pode ser menor que 0 ou maior que 10, digite novamente \n");
        scanf("%d", &Nota2);
    }
    
    printf("Digite a terceira nota: \n");
    scanf("%d", &Nota3);
    
        while(Nota3>10||Nota3<0){
        printf("A nota nao pode ser menor que 0 ou maior que 10, digite novamente \n");
        scanf("%d", &Nota3);
    }

    ME = (Nota1 + Nota2 + Nota3)/3;
    MA = (Nota1 + Nota2 * 2 + Nota3 * 3 + ME)/7;
    
    printf("A media do aluno foi: %.1f \n",MA);
    
    if(MA>4 & MA<6){
        printf("O aproveitamento foi D \n");
        printf("O aluno foi reprovado \n");
    }
    
    if(MA<4){
        printf("O aproveitamento foi E \n");
        printf("O aluno foi reprovado \n");
    }
    
    if(MA>=9){
        printf("O aproveitamento foi A \n");
        printf("O aluno foi aprovado \n");
    }
    
    if(MA>=7.5 & MA<9){
        printf("O aproveitamento foi B \n");
        printf("O aluno foi aprovado \n");
    }
    
    if(MA>=6 & MA<7.5){
        printf("O aproveitamento foi C \n");
        printf("O aluno foi aprovado \n");
    }
    
}
