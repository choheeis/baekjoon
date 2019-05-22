#include<stdio.h>

int main(){
	int n;
	long long num = 0;
	scanf("%d", &n);
	for(int i = 1 ; i < n ; i++){
		num = num + ((long long)n*(long long)i+(long long)i);
	}
	printf("%lld", num);
} 
