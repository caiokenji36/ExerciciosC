//Crie um programa para inserir valores inteiros em uma matriz 4x4 . Calcular e imprimir a soma de todos os elementos da matriz

#include <stdio.h>

#define Li 4
#define Co 4

void main(){

    int mtz[Li][Co];
    int linha=0;
    int coluna=0;
    int soma=0;
    
    //Entrada de dados na matriz
    
    for(linha=0;linha<Li;linha++)
        for(coluna=0;coluna<Co;coluna++){
            printf("Linha%d Coluna%d :",linha,coluna);
            scanf("%d",&mtz[linha][coluna]);
        }
    
    //somando valores da matriz
    for(linha=0;linha<Li;linha++)
        for(coluna=0;coluna<Co;coluna++){
            soma+=mtz[linha][coluna];
        }
        
        
    //imprimindo
    
    printf("\n\nSoma = %d\n\n",soma);
}