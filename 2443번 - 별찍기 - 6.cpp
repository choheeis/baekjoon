#include<stdio.h>

int main(){
	int n;
	int count=0;
	scanf("%d",&n);
	
	for(int k = n ; k >= 0 ; k--){
		for(int i = 0 ; i < n-k ; i++){
			printf(" ");
		}
		for(int j = 2*k-1 ; j > 0 ; j--){
			printf("*");
		}
		
		if(count == n-1) return 0;	
		printf("\n");
		count++;
	}
	
} 
