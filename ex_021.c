#include <stdio.h>

// 21. Receba três números que representam os lados de um triângulo e garantam a existência de um triângulo.
// Informe ao usuário se o triângulo é isóscele, equilátero ou escaleno.
// a. Garantir que cada lado é menor que a soma dos outros dois lados.
// b. O triângulo é equilátero quando todos os lados são iguais.
// c. O triângulo é isóscele quando apenas dois lados são iguais.

int main() {

    int a,b,c;
    
    printf("Digite 3 numeros que representem um triangulo \n");

do{
    printf("Digite um numero qualquer que nao seja menor ou igual a 0 \n");
    scanf("%d",&a);
}while(a<=0);

do{
    printf("Digite um segundo numero qualquer que nao seja menor ou igual a 0 \n");
    scanf("%d",&b);
}while(b<=0);

do{
    printf("Digite um terceiro numero qualquer que nao seja menor ou igual a 0 \n");
    scanf("%d",&c);
}while(c<=0);

    if (a!=b & b!=c & c!=a) {
        printf("O triangulo e escaleno");
        return 0;
    }
    
    if (a==b & a==c & c==b) {
        printf("O triangulo e equilatero \n");
        return 0;
    } else {
        printf("O triangulo e isoceles");
        return 0;
    }

}
