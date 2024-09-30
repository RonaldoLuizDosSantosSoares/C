/******************************************************************************

14.	Calcule a média aritmética das quatro notas de um aluno e mostre, além do valor da média,
uma mensagem de "Aprovado", caso a média seja igual ou superior a 6,
ou a mensagem "reprovado",caso contrário.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int Nota1, Nota2, Nota3, Nota4;
    float MA;
    
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
    
    printf("Digite a quarta nota: \n");
    scanf("%d", &Nota4);
    
        while(Nota4>10||Nota4<0){
        printf("A nota nao pode ser menor que 0 ou maior que 10, digite novamente \n");
        scanf("%d", &Nota4);
    }

    MA = (Nota1 + Nota2 + Nota3 + Nota4)/4;
    
    printf("A media aritmetica do aluno foi: %.1f \n",MA);
    
    if(MA<6){
        printf("Aluno reprovado \n");
    }
    else{
        printf("Aluno aprovado \n");
    }
    
}
