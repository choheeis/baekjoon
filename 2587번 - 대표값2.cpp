#include<stdio.h>

int main(){
	int input[5] = {0};
	int sum = 0;
	for(int i = 0 ; i < 5 ; i++){
		scanf("%d", &input[i]);
		sum += input[i];
	}
	
	for(int i = 0 ; i < 5 ; i++){
		for(int j = 0 ; j < 4 ; j++){
			if(input[j] > input[j+1]){
				int tmp = input[j];
				input[j] = input[j+1];
				input[j+1] = tmp;
			}
		}
	}
	printf("%d\n%d", sum/5, input[2]); 
}
