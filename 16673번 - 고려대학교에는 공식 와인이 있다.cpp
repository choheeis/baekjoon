#include<stdio.h>

int main(){
	int C, K, P;
	scanf("%d%d%d", &C, &K, &P);
	int sum = 0;
	for(int i = 1 ; i <= C; i++){
		sum = sum + K*i + P*i*i;
	}
	printf("%d", sum);
} 
