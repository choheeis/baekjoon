#include<stdio.h>

int main(){
	int n;
	int count=0;
	scanf("%d",&n);
	
	for(int k = 1 ; k <= n ; k++){
		for(int i = n-k ; i > 0 ; i--){
			printf(" ");
		}
		for(int j = 1 ; j <= 2*k-1 ; j++){
			printf("*");
		}
		if(count == n-1) return 0;	
		printf("\n");
		count++;
	}
	
} 
