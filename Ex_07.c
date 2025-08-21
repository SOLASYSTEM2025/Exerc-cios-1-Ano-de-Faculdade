//Conversor de mês.


#include<stdlib.h>
#include<stdio.h>

int main() {
    
    
    int dia, mes, ano;
    char nome[100], meses[12][20] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    
    printf("Digite seu nome por favor: ");
        scanf("%s", nome);
    printf("\nOla %s, digite a data no formato dd/mm/aaaa: " ,nome);
        scanf("%d/%d/%d", &dia, &mes, &ano);
        
    printf("\n\n<---------------------------------------------------->\n");
    if (mes >= 1 && mes <= 12) {
        printf("%d de %s de %d\n", dia, meses[mes - 1], ano);
    } else {
        printf("Mes invalido.\n");
    }
    printf("<---------------------------------------------------->");

    return 0;
    
}
