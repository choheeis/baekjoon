#include<stdio.h>

int main(){
	int n;
	long long int num = 0;
	scanf("%d", &n);
	for(int i = 1 ; i < n ; i++){
		num = num + ((long long int)n*(long long int)i+(long long int)i);
	}
	printf("%lld", num);
} 





