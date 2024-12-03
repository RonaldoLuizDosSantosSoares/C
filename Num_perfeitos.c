/******************************************************************************

Caiu na prova P2: Vetor e numeros Perfeitos

*******************************************************************************/

#include <stdio.h>

#define MAX_TAMANHO 100
#define MIN_TAMANHO 10

int A[MAX_TAMANHO];
int Perfeitos[MAX_TAMANHO];

int eh_perfeito(int num) {
    int soma = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return (soma == num && num > 1);
}

int main() {
    int K;
    
    do {
        printf("Digite o tamanho do vetor (entre 10 e 100): ");
        scanf("%d", &K);
    } while (K < MIN_TAMANHO || K > MAX_TAMANHO);

    printf("Digite os %d valores para o vetor A:\n", K);
    for (int i = 0; i < K; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    int j = 0; // Índice para o vetor Perfeitos
    for (int i = 0; i < K; i++) {
        if (eh_perfeito(A[i])) {
            Perfeitos[j++] = A[i];
        }
    }

    printf("Números perfeitos encontrados: ");
    if (j == 0) {
        printf("Nenhum número perfeito encontrado.\n");
    } else {
        for (int i = 0; i < j; i++) {
            printf("%d ", Perfeitos[i]);
        }
        printf("\n");
    }
}
