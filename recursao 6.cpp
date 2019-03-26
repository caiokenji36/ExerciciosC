//calcular n-esimo elemento na serie: 1,1,2,3,5,8,13......
#include <stdio.h>

int fib(int n){
	if(n==1 || n==2)
		return 1;
	
	return fib(n-1)+fib(n-2);
}

int main(){
	printf("%d",fib(6));
	}
