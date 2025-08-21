//Calculadora pra ver se vai dar pra comprar ou não.

#include<stdlib.h>
#include<stdio.h>

int main(){
        
        
    char nome[100];
    int moeda1r, moeda50c, moeda25c, moeda10c, moeda5c, moeda1c;
    float valor_produto, valor_total_cofrinho, troco, falta;
    
    printf("Digite seu nome por favor:" );
        scanf("%s" ,nome);
    printf("\nOla %s, quantas moedas de 1 real voce tem:" ,nome );
        scanf("%d" ,&moeda1r);
    printf("Moedas de 0.50 centavos:" );
        scanf("%d" ,&moeda50c);
    printf("0.25 centavos:" );
        scanf("%d" ,&moeda25c);
    printf("0.10 centavos:" );
        scanf("%d" ,&moeda10c);
    printf("0.05 centavos:" );
        scanf("%d" ,&moeda5c);
    printf("0.01 centavo:" );
        scanf("%d" ,&moeda1c);
    printf("\n%s, agora qual o valor do produto que voce quer comprar:" ,nome );
        scanf("%f" ,&valor_produto);
        
    valor_total_cofrinho = 
    moeda1r * 1.0f +
    moeda50c * 0.50f +
    moeda25c * 0.25f +
    moeda10c * 0.10f +
    moeda5c * 0.05f +
    moeda1c * 0.01f;
    
    printf("\n\n<------------------------------------------------------------------------------------------>\n");
    if(valor_total_cofrinho > valor_produto) {
        troco = valor_total_cofrinho - valor_produto;
        printf("Boa %s, voce consegue comprar o produto e te sobra %.2f Reais de troco!" ,nome ,troco);
    } else if(valor_total_cofrinho < valor_produto) {
        falta = valor_produto - valor_total_cofrinho;
        printf("Puts %s, voce so tem %.2f Reais, o produto que voce quer eh %.2f Reais,\n"
       "lhe faltam %.2f Reais, voce nao tem dinheiro suficiente, junte mais :).\n",
       nome, valor_total_cofrinho, valor_produto, falta);    }
    else{
        printf("Boa %s, o dinheiro que voce tem vai dar certinho pra comprar o produto desejado!\n"
        "Nao se esqueca de continuar guardando parte das suas economias em :)." ,nome);
    }
    printf("\n<------------------------------------------------------------------------------------------>");
    
    
    return 0;
    
}
