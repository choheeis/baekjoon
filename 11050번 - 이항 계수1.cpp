#include<stdio.h>

// nCm ���� ���  
int main(){
	int N, K, result = 1;
	scanf("%d %d", &N, &K);
	for(int i = 0 ; i < K ; i++){
		result *= N-i;
	} 
	for(int i = 0 ; i < K ; i++){
		result /= K-i;
	}
	printf("%d", result);
}
