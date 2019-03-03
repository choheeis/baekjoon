#include<stdio.h>

int main(){
	int input;
	char n[input];
	int sum=0;
	scanf("%d",&input);
	for(int i=0;i<input;i++){
		scanf("%c",&n[i]);
		sum = sum+(int)n[i];
	}
	printf("%d",sum);
}
