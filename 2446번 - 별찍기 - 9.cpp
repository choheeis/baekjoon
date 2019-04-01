#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int l = n;
	int g = 0;
	for(int i = 0 ; i < n ; i++){
		for(int k = 0 ; k<g ; k++){
			printf(" ");
		}
		g++;
		
		for(int j = 0 ; j < 2*l - 1 ; j++){
			printf("*");
		}
		l--;
		
		printf("\n");
	}
	l = 1;
	g = n-2;
	for(int i = 0 ; i < n-1 ; i++){
		for(int k = 0 ; k < g ; k++){
			printf(" ");
		}
		g--;
		for(int j = 0 ; j < 2*l + 1; j++){
			printf("*");
		}
		l++;
		if(l == n){
			return 0;
		}
		printf("\n");
	}
} 
