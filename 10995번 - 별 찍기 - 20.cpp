#include<stdio.h>

int main(){
	int n,count = 0;
	scanf("%d", &n);
	for(int i = 0 ; i < n ; i++){
		if(i == 0 || i%2 == 0){
			for(int k = 0 ; k < n-1 ; k++){
				printf("* ");
			}
			printf("*");
		}else{
			for(int g = 0 ; g < n ; g++){
				printf(" *");
			}
		}
		count++;
		if(count == n) return 0;
		printf("\n");
	}
}
