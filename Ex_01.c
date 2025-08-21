//Calculadora de área, diâmetro e comprimento de uma circuferência.

#include<stdlib.h>
#include<stdio.h>

int main(){
        
        
        char nome [100];
        float raio, diametro, comprimento, area;
        
        printf("Digite seu nome por favor:" );
            scanf("%s" ,nome);
            
        printf("\nOla %s, digite o raio do seu circulo porfavor:" ,nome);
            scanf("%f" ,&raio);
            
        diametro = 2 * raio;
        
        comprimento = 2 * 3.14 * raio;
        
        area = 3.14 * raio * raio;
        
        printf("\n\n<---------------------------------------------------->\n");
        printf("A Area do seu circulo eh: %.2f\n" ,area);
        printf("O diametro: %.2f\n" ,diametro);
        printf("E o comprimento: %.2f\n" ,comprimento);
        printf("<---------------------------------------------------->");
        
        return 0;
    
}
