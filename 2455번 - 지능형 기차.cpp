#include<stdio.h>

int main(){
	int arr[8];
	int sum = 0;
	for(int i = 0 ; i < 8 ; i++){
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for(int i = 0 ; i < 7 ; i++){
		
		sum = sum + arr[i+1] - arr[i];
		if(max < sum) max = sum;
		i++;
		
	}
	printf("%d", max);
}
