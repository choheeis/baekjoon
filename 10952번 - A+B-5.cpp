#include<stdio.h>

int main(){
	int n1=1;
	int n2=2;
	while(true){
		scanf("%d%d", &n1,&n2);
		if(n1==0){
			break;
		}
		printf("%d\n",n1+n2);
	}
}
