#include<stdio.h>

int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	int result = N-1;
	result += (M-1)*N;
	printf("%d", result) ;
}
