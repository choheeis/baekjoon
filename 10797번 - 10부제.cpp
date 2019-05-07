#include<stdio.h>

int main(){
	int n;
	int arr[5];
	int count = 0;
	scanf("%d", &n);
	for(int i = 0 ; i < 5 ; i++){
		scanf("%d", &arr[i]);
		if(n == arr[i]) count++;
	}
	printf("%d",count);
} 
