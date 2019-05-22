#include<stdio.h>

int main(){
	int n,count = 0;
	scanf("%d", &n);
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < i+1 ; j++){
			printf("*");
		}
		if(n == 1) return 0;
		printf("\n");
	}
	for(int i = 0 ; i <= n-1 ; i++){
		for(int j = 0 ; j < n-1-i ; j++){
			printf("*");
		}
		count++;
		if(count == n-1) return 0;
		printf("\n");
	}
} 
