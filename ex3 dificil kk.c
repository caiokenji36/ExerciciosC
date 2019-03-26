/*
3) Escreva um programa em C que encontra a “moda” em um vetor de 20 elementos digitados pelo usuário. Na estatística, 
a moda de uma coleção de valores é aquele queaparece com maior frequência, desempatando arbitrariamente.
*/


#include <stdio.h>
#define tam 5


int main(){
	
	int vet[tam];
	int moda;
	int quant,quant_ant,i,cont;
	quant=1;
	quant_ant=1;
	
	for(cont=0;cont<tam;cont++){
		printf("Digite um valor: ");
		scanf("%d",&vet[cont]);
	}
	
	for(cont=0;cont<tam;cont++){
		
		i=cont+1;
		quant=0;
		
		while(i<tam){
			
			if(vet[cont]==vet[i])
				quant++;
				
				if(quant>quant_ant){
					moda=vet[i];
					quant_ant=quant;
				}
			i++;
		}
	}
	
	printf("O Valor que mais se repete: %d = repetido %d",moda,quant_ant);
	getch();
}
