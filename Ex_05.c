//Calculadora para ver se o número é Impar ou Par.

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {
    
    char nome[100];
    int numero;
    float raiz, resultado;

    printf("Digite seu nome por favor: ");
    scanf("%s", nome);
    
    printf("\nOla %s, digite um numero: " ,nome);
    scanf("%d", &numero);

    raiz = sqrt((float)numero);
    
    printf("\n\n<------------------------------------------------------------------------------------>\n");
    if (numero % 2 == 0) {
        printf("O numero %d eh par, e a raiz quadrada dele eh %.2f.\n", numero, raiz);
    } else {
        printf("O numero %d eh impar, e ele elevado ao quadrado eh %d.\n", numero, numero * numero);
    }
    printf("<------------------------------------------------------------------------------------>");

    return 0;
    
}
/*Prof, não lembro se o senhor já ensinou sobre o sqrt por que eu não lembro do senhor falando sobre,
mas eu aprendi sobre ele no livro que o senhor passou também.*/
