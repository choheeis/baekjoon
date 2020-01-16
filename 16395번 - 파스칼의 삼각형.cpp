#include<stdio.h>

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	n = n - 1, k = k - 1;
	
	unsigned long long multi = 1, remain = 1;
	if(n-k < k){
		k = n - k;
	} 
	for(int i = 0 ; i < k ; i++){
		multi *= (n-i);
	}
	for(int i = 0 ; i < k ; i++){
		remain *= (k-i);
	}
	printf("%lld", multi/remain);
}  
