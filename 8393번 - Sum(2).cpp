#include<stdio.h>

// recursive function(����Լ�)�� �ۼ��� �ڵ� 
int recursiveSum(int a);
int main(){
	int n;
	scanf("%d", &n);
	printf("%d", recursiveSum(n));
}

int recursiveSum(int a){
	if(a == 1) return 1;
	return a + recursiveSum(a-1);
}
