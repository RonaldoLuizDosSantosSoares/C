#include <stdio.h>

// 22. faca um programa que receba o numero de horas trabalhadas e o salario minimo

int main() {
    int hrs_trabalhadas;
    float valor_hr, sal_bruto, sal_minimo, imposto, sal_final;
    
    printf("Digite as horas trabalhadas: \n");
    scanf("%d", &hrs_trabalhadas);
    
    printf("Digite o salario minimo: \n");
    scanf("%f", &sal_minimo);
    
    valor_hr = sal_minimo / 220.0;
    
    sal_bruto = hrs_trabalhadas * valor_hr;
    
    imposto = sal_bruto * 0.03;
    
    sal_final = sal_bruto - imposto;
    
    printf("O salario final e de: %.2f \n", sal_final);
    
    return 0;
}
