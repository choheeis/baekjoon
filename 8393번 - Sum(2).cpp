#include<stdio.h>

// recursive function(재귀함수)로 작성한 코드 
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
