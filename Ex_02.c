//Identificador do mês.

#include<stdlib.h>
#include<stdio.h>

int main(){
    
    
    char nome[100];
    int mes;
        
    printf("Digite seu nome por favor:");
        scanf("%s" ,nome);
            
    printf("\nOla %s, qual o numero do mes:" ,nome);
        scanf("%d" ,&mes);
        
    /*Prof, aqui eu usei o Swicth-case por que eu achei mais fácil e também mais limpo doque o if-else, 
    aí o senhor não colocou nada lá que era obrigatório usar o if-else, então pesquisei se dava pra usar
    nesse programa por que lembro que o senhor falou que tem casos e casos para usar,
    aprendi no livro que o senhor passou, Algoritimos e Lógica de Programação - Silvio do Lago Pereira.*/
    printf("\n\n<------------------------------------------------------------------------------------------------------------------------->");
    switch(mes){
        
        case 1:
            printf("O mes %d eh: Janeiro, primeiro mes do ano!!!" ,mes);
            break;
        case 2:
            printf("\n\nO mes %d eh: Fevereiro, segundo mes do ano!!!" ,mes);
            break;
        case 3:
            printf("\n\nO mes %d eh: Março, mes do Carnaval (3 a 4) e da Quarta-Feira de Cinzas (5)!!!" ,mes);
            break;
        case 4:
            printf("\n\nO mes %d eh: Abril, mes da Paixao de Cristo (18), Pascoa (20) e Tiradentes (21)!!!" ,mes);
            break;
        case 5:
            printf("\n\nO mes %d eh: Maio, mes do Dia do Trabalhador (1)!!!" ,mes);
            break;
        case 6:
            printf("\n\nO mes %d eh: Junho, mes de Corpus Christi (19)!!!" ,mes);
            break;
        case 7:
            printf("\n\nO mes %d eh: Julho, ja passamos do meio do Ano!!!" ,mes);
            break;
        case 8:
            printf("\n\nO mes %d eh: Agosto, nada de especial :(" ,mes);
            break;
        case 9:
            printf("\n\nO mes %d eh: Setembro, mes da Independencia do Brasil (7)!!!" ,mes);
            break;
        case 10:
            printf("\n\nO mes %d eh: Outubro, mes da Nossa Senhora Aparecida (12) e dia das crianças (12)!!!" ,mes);
            break;
        case 11:
            printf("\n\nO mes %d eh: Novembro, mes dos Finados (2), Proclamacao da Republica (15) e a Consciencia Negra (20)!!!" ,mes);
            break;
        case 12:
            printf("\n\nO mes %d eh: Dezembro, mes do Natal (25) e vespera de Ano Novo (31)!!!\n" ,mes);
            break;
        default:
            printf("\n\nINVALIDO, digite somente numeros de 0 a 12.");
            break;
        
    }
    printf("\n\n<------------------------------------------------------------------------------------------------------------------------->");
    
    
    
    return 0;
    
}
