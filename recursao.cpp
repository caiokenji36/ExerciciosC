/* Recursao
--problema deve exigir repeticao
--encontrar os casos base.Sao aqueles cuja solucao e trivial e, em geral, reque pouco ou nehum esforco computacional
--caractreizar o passo recursivo, momento em que a funcao chama ela mesma
--no passo recursivo,deve se levar em conta a necessidade de convergencia para o caso base.

1 exercicio exibir elementos de um vetor recursivamente. */

#include <stdio.h>
#include <stdlib.h>

void exibe_vetor(int v[],int n,int i){//N elementos  e i de onde vai comecar, posicao i
	if(i>=n){//se o i for igual o n quer dizer que o vetor esta vazio
		return;//se o if e falso ele pula o return
}
	printf("%d ",v[i]);
	exibe_vetor(v,n,i+1);//chama ela mesma, entao e recursiva


}

int main(){
	int x[]={4,2,1,3};
	exibe_vetor(x,4,0);//x = nome do vetor, 4 = numero de posicoes e 0 =a posicao que vc quer que comece mostrando do vetor
	return 0;
	
}
