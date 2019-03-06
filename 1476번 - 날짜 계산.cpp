#include<stdio.h>

int main(){
	int e,s,m;
	scanf("%d%d%d",&e,&s,&m);
	int n1=0; //  이거 적기
	int a=0,b=0,c=0; 
	int count=0;
	for(int i=0;;i++){
		n1++;
		a = (n1-(n1/15)*15)%15;
		if(a==0) a=15;
		b = (n1-(n1/28)*28)%28;
		if(b==0) b=28;
		c = (n1-(n1/19)*19)%19;
		if(c==0) c=19;
		if(a==e && b==s && c==m){
			count = i+1;
			break;
		}else{
			continue;
		}
	}
	printf("%d",count);
} 

