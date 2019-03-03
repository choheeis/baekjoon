#include<stdio.h>

int main(){
	int input;
	int n1,n2;
	scanf("%d",&input);
	
	for(int i = 0 ; i < input ; i++){
		scanf("%d%d",&n1,&n2);
		printf("%d\n",n1+n2);
	}
}
