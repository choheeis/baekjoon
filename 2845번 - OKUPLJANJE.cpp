#include<stdio.h>

int main(){
	int L, P;
	scanf("%d %d", &L, &P);
	int arr[5] = {0};
	for(int i = 0 ; i < 5 ; i++){
		scanf("%d", &arr[i]);
	}
	int collect = L*P; // ���� �ο��� 
	for(int i = 0 ; i < 5 ; i++){
		printf("%d ", arr[i] - collect);
	} 
	
} 
