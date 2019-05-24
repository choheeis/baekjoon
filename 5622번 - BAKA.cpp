#include<stdio.h>
#include<string.h>

int main(){
	char ch[16];
	int sum = 0;
	scanf("%s", ch);
	
	for(int i = 0 ; i < strlen(ch) ; i++){
		if(ch[i]>='A' && ch[i]<='C') sum += 3;
		else if(ch[i]>='D' && ch[i]<='F') sum += 4;
		else if(ch[i]>='G' && ch[i]<='I') sum += 5;
		else if(ch[i]>='J' && ch[i]<='L') sum += 6;
		else if(ch[i]>='M' && ch[i]<='O') sum += 7;
		else if(ch[i]>='P' && ch[i]<='S') sum += 8;
		else if(ch[i]>='T' && ch[i]<='V') sum += 9;
		else sum += 10;
	}	
	printf("%d", sum);
}
