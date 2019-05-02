#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int n1[n+1];
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &n1[i]);
	}
	
	int temp = 0;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n-1 ; j++){
			if(n1[j] > n1[j+1]){
			temp = n1[j+1];
			n1[j+1] = n1[j];
			n1[j] = temp;
			}	
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		printf("%d\n", n1[i]);
	}
}
