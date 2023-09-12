//Elaborar um programa em Linguagem C que calcule e mostre o valor médio da cotação do carro XXX em quatro concessionárias diferentes. 

#include <stdio.h>
#include <locale.h>

int main() {
    float valor1, valor2, valor3, valor4, media;
    
    printf("Digite o valor da cotacao do carro na primeira concessionaria: ");
    scanf("%f", &valor1);
    
    printf("Digite o valor da cotacao do carro na segunda concessionaria: ");
    scanf("%f", &valor2);
    
    printf("Digite o valor da cotacao do carro na terceira concessionaria: ");
    scanf("%f", &valor3);
    
    printf("Digite o valor da cotacao do carro na quarta concessionaria: ");
    scanf("%f", &valor4);
    
    media = (valor1 + valor2 + valor3 + valor4) / 4;
    
    printf("A media da cotacao do carro nas quatro concessionarias e: %.2f\n", media);
    
    return 0;
}

