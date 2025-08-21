// Calculadora de salário.


#include<stdlib.h>
#include<stdio.h>

int main() {
    
    int codigo_operario;
    float horas_trabalhadas;
    float salario, excesso, salario_total;

    printf("Digite o código do operário: ");
        scanf("%d", &codigo_operario);

    printf("\nDigite o número de horas trabalhadas: ");
        scanf("%f", &horas_trabalhadas);

    if (horas_trabalhadas > 50) {
        excesso = horas_trabalhadas - 50;
        salario = 50 * 10.0;
        salario_total = salario + (excesso * 20.0);
    } else {
        excesso = 0;
        salario_total = horas_trabalhadas * 10.0;
    }
    
    printf("\n\n<---------------------------------------------------->\n");
    printf("Código do operário: %d\n", codigo_operario);
    printf("Salário excedente: R$ %.2f\n", excesso * 20.0);
    printf("Salário total: R$ %.2f\n", salario_total);
    printf("<---------------------------------------------------->");

    return 0;
    
    
}
