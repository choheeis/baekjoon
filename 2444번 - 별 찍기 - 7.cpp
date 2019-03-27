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
		if(n == 1){
			return 0;
		}
		printf("\n");
		if(count == n-1){
			for(int l = 1 ; l <= l ; l++){
				for(int g = 0 ; g < l ; g++){
					printf(" ");	
				}
				for(int h = 0 ; h < 2*(k-l)-1 ; h++){
					printf("*");					
				}
				if(l == (k-1)) return 0;
				printf("\n");
				
			}
		}	
		count++;
	}
	
} 
