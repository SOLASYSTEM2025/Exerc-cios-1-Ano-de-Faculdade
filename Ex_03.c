//Identificador De número > ou < ou = também

#include<stdlib.h>
#include<stdio.h>

int main(){
    
    
    char nome[100];
    float num1, num2;
        
    printf("Digite seu nome por favor: ");
        scanf("%s" ,nome);
            
    printf("\nOla %s, digite o primeiro numero por favor: " ,nome);
        scanf("%f", &num1);

    printf("\nAgora o segundo numero: ");
        scanf("%f", &num2);
    
    printf("\n\n<---------------------------------------------------------->\n");
    if(num1 > num2){
        printf("\nO numero %.2f, eh maior que o numero %.2f." , num1, num2 );
    } else if(num1 < num2){
        printf("O numero %.2f, eh menor que o numero %.2f.\n" , num1, num2);
    } else{
        printf("Os numeros %.2f e %.2f sao iguais.\n" , num1, num2);
    }
    printf("\n<---------------------------------------------------------->");
    
    return 0;
    
}
