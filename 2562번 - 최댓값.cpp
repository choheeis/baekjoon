#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int input[n+1] = {0};
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &input[i]);
	}
	int max = input[0];
	int min = input[0];
	for(int i = 1 ; i < n; i++){
		if(max < input[i]){
			max = input[i];
		}
		if(min > input[i]){
			min = input[i];
		}
	}
	printf("%d %d", min, max);
}
