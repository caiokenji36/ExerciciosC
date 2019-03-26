/* achar o menor em menos linha */
#include <stdio.h>
int acha_menor(int v[],int n,int i){
	return i==n-1?v[i]:
		(v[i] <acha_menor(v,n,i+1)?v[i]
		:acha_menor(v,n,i+1));
}

int main(){
	int v[]={4,5,2,1};
	int c;
	c=acha_menor(v,4,0);
	printf("o menor = %d\n",c);
	return 0;
}
