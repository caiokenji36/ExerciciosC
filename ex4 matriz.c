/*
4) Faça um programa que gere uma matriz 8X8
preenchendo com ‘1’ as “células” da área destacada
da matriz abaixo, e ‘0’ as demais “células”.

ex

1 0 0 0 0 0 0 0
1 1 0 0 0 0 0 0
1 1 1 0 0 0 0 0
1 1 1 1 0 0 0 0
1 1 1 1 1 0 0 0 
1 1 1 1 1 1 0 0
1 1 1 1 1 1 1 0
1 1 1 1 1 1 1 1 

*/
#include <stdio.h>

#define tam 8

void main(){

    int mtz[tam][tam];
    int lin,col;
    
    for(lin=0;lin<tam;lin++){
        
        for(col=0;col<tam;col++){
            
           //Enquanto coluna for menor ou igual a linha adc o 1 se não adc o 0
            if(col<=lin)
                mtz[lin][col]=1;
            else
                mtz[lin][col]=0;
        }
    }
    
    
    for(lin=0;lin<tam;lin++){
        for(col=0;col<tam;col++)
            printf(" %3d ",mtz[lin][col]);
    
        printf("\n");
    }
}
