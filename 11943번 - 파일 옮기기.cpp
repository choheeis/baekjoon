#include<stdio.h>

int main(){
	int n1,n2;
	int n3,n4;
	
	scanf("%d%d", &n1, &n2);
	scanf("%d%d", &n3, &n4);
	
	int a = n1 + n4;
	int b = n2 + n3;
	if(a<b){
		printf("%d", a);
	}else{
		printf("%d", b);
	}
} 
