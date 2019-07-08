#include<stdio.h>

int main(){
	int n[3];
	for(int i = 0 ; i < 3 ; i++){
		scanf("%d", &n[i]);
	}
	int max = n[0], min = 1000000;
	for(int i = 0 ; i < 3 ; i++){
		if(n[i] > max) max = n[i];
		if(n[i] < min) min = n[i];
	}
	int mid = 0;
	for(int i = 0 ; i < 3 ; i++){
		if(n[i] != max && n[i] != min) mid = n[i]; 
	}
	printf("%d %d %d", min, mid, max);
}
