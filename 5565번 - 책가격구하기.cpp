#include<stdio.h>

int main(){
	int n[10];
	scanf("%d", &n[0]);
	for(int i = 1 ; i < 10 ; i++){
		scanf("%d", &n[i]);
		n[0] -= n[i];
	}
	printf("%d", n[0]);
}
