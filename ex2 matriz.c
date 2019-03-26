#include <stdio.h>
#include <stdlib.h>
#define tam 3

void LeMatriz(void);
void VerificaIgualdade(int num [tam][tam], int num1 [tam][tam]);
void VerificaMatrizIdentidade(int MatrizA [tam][tam]);

main (){
	
	
	 LeMatriz();
	
	system ("pause");
}


void LeMatriz(void){ //
	
	int MatrizA[tam][tam];
	int MatrizB[tam][tam]; 
	int i,j;
	
	printf("Insira os dados das Matrizes 3X3");
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
		printf("Mat1:");
		scanf("%d",&MatrizA[i][j]);
	}
		}
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
		printf("Mat2:");
		scanf("%d",&MatrizB[i][j]);
	}
		}
	VerificaIgualdade(MatrizA,MatrizB);		
	
 return;
}

void VerificaIgualdade(int num [tam][tam], int num1 [tam][tam]){
	int i,j,aux,aux1,aux3,aux4;
	
	aux=0;
	aux3=0;
	aux4=0;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			num[i][j]=aux;	
	}

	}
	aux1=0;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
		num[i][j]=aux1;		
	}

	}
	for(i=0;i<tam;i++){
		
		if(aux==aux1){
		aux3++;
	}
	else {
		aux4++;
	}
	
	}
	printf("\nteve %d repeticoes e %d diferentes: ",aux3,aux4);
		
	return;

}
