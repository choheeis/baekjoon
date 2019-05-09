#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if(n == 0){
		return 0;
	}
	int arr[n][7];
	int sum[n] = {0};
	int min[n][7] = {0};
	int resultMin[n];
	for(int i = 0 ; i < n ; i++){
		resultMin[i] = 100;	
	}
	
	int count = 0;
	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < 7 ; j++){
			scanf("%d", &arr[i][j]);
			if(arr[i][j] % 2 == 0){
				sum[i] = sum[i] + arr[i][j];
				min[i][count] = arr[i][j];
				count++;
			}
		}
		count=0;
	}
	
	for(int i = 0 ; i < n ; i++){
		resultMin[i] = min[i][0];
		for(int j = 0 ; j < 7 ;j++){
			if(min[i][j] != 0 && resultMin[i] > min[i][j]) resultMin[i] = min[i][j];
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		printf("%d %d\n", sum[i], resultMin[i]);
	}
	
	
}
