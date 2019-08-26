// 선택정렬로 풀어보자.
// N^N 해도 1,000,000 (백만) 이니까 1초 안에 풀 수 있음! 

#include<stdio.h>

int arr[1001];
 
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0 ; i < n ; i++){
		int min = 9999, index = 0;
		for(int j = i ; j < n ; j++){
			if(min > arr[j]){
				min = arr[j];
				index = j;
			}
		}
		int tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;
	}
	
	for(int i = 0 ; i < n ; i++){
		printf("%d\n", arr[i]);
	}
}
