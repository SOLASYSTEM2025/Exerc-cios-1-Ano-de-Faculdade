//Calculadora IMC.


#include<stdlib.h>
#include<stdio.h>

int main() {
    
    char nome[100];
    float peso, altura_cm, altura_m, imc;
    
    printf("Digite seu nome por favor:" );
        scanf("%s" ,nome);
    printf("\nOla %s, digite o peso em kg: " ,nome);
        scanf("%f", &peso);
    printf("\nAgora digite a altura em cm %s: " ,nome);
        scanf("%f", &altura_cm);

    altura_m = altura_cm / 100.0;
    imc = peso / (altura_m * altura_m);
    
    printf("\n\n<------------------------------------------>\n");
    printf("Seu IMC é: %.2f\n", imc);
    printf("Classificação: ");

    
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Peso normal\n");
    } else if (imc < 30.0) {
        printf("Sobrepeso\n");
    } else if (imc < 35.0) {
        printf("Obeso leve\n");
    } else if (imc < 40.0) {
        printf("Obeso moderado\n");
    } else {
        printf("Obeso mórbido\n");
    }
    printf("<------------------------------------------>");
    
    return 0;
    
    
}
