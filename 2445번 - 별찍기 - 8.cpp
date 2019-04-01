#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int k = 1;
	int t = n-1;
	for(int i = 0 ; i < n ; i++){
		
		for(int l = 0 ; l < k ; l++){
			printf("*");	
		}
		for(int j = 0 ; j < 2*n - 2*k ; j++){
			printf(" ");
		}
		for(int h = 0 ; h < k ; h++){
			printf("*");		
		}
		printf("\n");
		if(k == n){
			break;
		}
		k++;		
	}
	
	for(int i = 0 ; i < n-1 ; i++){
		
		for(int h = 0 ; h < t ; h++){
			printf("*");
		}
		for(int j = 0 ; j < 2*n - 2*t ; j++){
			printf(" ");
		}
		for(int l = 0 ; l < t ; l++){
			printf("*");
		}
		t--;
		if(t == 0){
			return 0;
		}
		printf("\n");
	}

}
