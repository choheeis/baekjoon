#include<stdio.h>

int main(){
	int input;
	int n1,n2;
	scanf("%d", &input);
	int result[input];

	for(int i = 0 ; i < input ; i++){
		scanf("%d%d",&n1,&n2);
		result[i] = n1+n2;
	}
	for(int i = 0 ; i < input ; i++){
		printf("%d\n",result[i] );
	}

	return 0;	
	
}
