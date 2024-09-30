/**************************

7.	Leia quatro valores referentes às notas escolares de um aluno e exiba uma mensagem dizendo que
ele foi aprovado se a média for maior ou igual a 6.
Caso contrário informe que ele está reprovado.
Apresente junto à mensagem o valor da média obtida pelo aluno independente de ter sido aprovado ou não.
As notas deverão ser maiores ou iguais a zero e menores ou iguais a dez.


***************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1,v2,v3,v4;
    float media;

    printf("Digite o valor da primeira nota: \n");
    scanf("%d", &v1);
    
    if(v1<0||v1>10){
    printf("O valor da nota nao pode ser menor que 0 nem maior que 10, Digite novamente: \n");
    scanf("%d", &v1);
    }
    
    printf("Digite o valor da segunda nota: \n");
    scanf("%d", &v2);

    if(v2<0||v2>10){
    printf("O valor da nota nao pode ser menor que 0 nem maior que 10, Digite novamente: \n");
    scanf("%d", &v2);
    }
    
    printf("Digite o valor da terceira nota: \n");
    scanf("%d", &v3);
    
    if(v3<0||v3>10){
    printf("O valor da nota nao pode ser menor que 0 nem maior que 10, Digite novamente: \n");
    scanf("%d", &v3);
    }
    
    printf("Digite o valor da quarta nota: \n");
    scanf("%d", &v4);
   
    if(v4<0||v4>10){
    printf("O valor da nota nao pode ser menor que 0 nem maior que 10, Digite novamente: \n");
    scanf("%d", &v4);
    }

    media = (v1 + v2 + v3 + v4)/4;
    
    if(media>=6){
       printf("O aluno foi aprovado \n");
    }
    else{
       printf("O aluno foi reprovado \n");
        }

    printf("A media foi: %.1f", media);

}
