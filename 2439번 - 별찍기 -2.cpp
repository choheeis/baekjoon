#include<stdio.h>

int main(){
	int input;
	scanf("%d",&input);
	
	for(int i = 1 ; i <= input ; i++){
		for(int j = input-i ; j>0 ; j--){
			printf(" ");
		}
		for(int k = 0 ; k<i;k++){
			printf("*");
		}
		printf("\n");
	}
}
