//Calculadora de Empréstimo.

#include <stdlib.h>
#include <stdio.h>

int main(){
    
    char nome_trabalhador[100];
    int vezes_parcelas;
    float valor_emprestimo, valor_parcelas, salario, limite;
    
    
    printf("Ola, qual o nome do trabalhador:" );
        scanf("%s" ,nome_trabalhador);
    printf("\nQual eh o salario do Sr.%s:" ,nome_trabalhador);
        scanf("%f" ,&salario);
    printf("\nQual o valor do emprestimo que o Sr.%s quer fazer:" ,nome_trabalhador);
        scanf("%f" ,&valor_emprestimo);
    printf("\nE em quantas vezes quer parcelar este valor de %.2f: " ,valor_emprestimo);
        scanf("%d", &vezes_parcelas);
        
    valor_parcelas = valor_emprestimo / vezes_parcelas;
    limite = salario * 0.20;
    
    printf("\n\n<---------------------------------------------------------------------------------------------------------->\n");
    if(valor_parcelas > limite) {
        printf("Empréstimo não concedido. O valor da parcela (%.2f) excede 20%% do salario (%.2f).\n", valor_parcelas, salario);
    } else {
        printf("Empréstimo concedido. O valor da parcela será de %.2f em %d vezes.\n", valor_parcelas, vezes_parcelas);
    }
    printf("<---------------------------------------------------------------------------------------------------------->");
    
    return 0;
    
    
}
