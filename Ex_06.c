//Calculadora pra saber se o aluno foi Aprovado, Reprovado ou está de Recuperação.

#include<stdlib.h>
#include<stdio.h>

int main(){
    
    
    char nome[100];
    float nota_trabalho, nota_avaliacao, nota_exame, media, faltam_recuperacao, faltam_reprovado;
    
    printf("Qual o nome do Aluno:" );
        scanf("%s" ,nome);
    printf("\nQual a nota do Aluno %s no Trabalho de Laboratorio:" ,nome );
        scanf("%f" ,&nota_trabalho);
    printf("E qual a nota da Avaliacao Semestral:" );
        scanf("%f" ,&nota_avaliacao);
    printf("E a nota do Exame:" );
        scanf("%f" ,&nota_exame);
        
    media = (nota_trabalho * 2 + nota_avaliacao * 3 + nota_exame * 5) / 10;
    
    printf("\n\n<------------------------------------------------------------------------------------>\n");
    if (media >= 7.0) {
        printf("Aluno aprovado! Media final: %.2f\n", media);
    } else if (media < 7.0 && media >= 3.0) {
        faltam_recuperacao = 7.0 - media;
        printf("Aluno em recuperacao, faltam %.2f pontos. Media: %.2f\n", faltam_recuperacao, media);
    } else {
        faltam_reprovado = 7.0 - media;
        printf("Aluno reprovado por %.2f pontos. Media final: %.2f\n", faltam_reprovado, media);
    }
    printf("<------------------------------------------------------------------------------------>");
    
    
    return 0;
    
}
