#include<stdio.h>

int fibonaci(int a);

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fibonaci(n));
} 

int fibonaci(int a){
	
	if(a > 1){
		return fibonaci(a-1) + fibonaci(a-2);	
	}else if(a == 1){
		return 1;
	}else{
		return 0;
	}
	
}
