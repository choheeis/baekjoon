#include<stdio.h>

int main(){

	int n=0, x=0, check=0;
	scanf("%d%d", &n, &x);
	for(int i=0; i<n; ++i){
		scanf("%d", &check);
		if(check<x) printf("%d ", check);
	}
	
}
