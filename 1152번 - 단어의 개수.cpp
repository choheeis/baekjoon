#include<stdio.h>
#include<string.h>
int main(){
	char ch[1000001];
	int num = 0;
	scanf("%[^\n]s", ch);
	if(ch[0]==32){
		for(int i = 0 ; i < strlen(ch) - 1; i++){
			if(ch[i] == 32 && ch[i+1] != 32) num++;	
		}
		printf("%d", num);
	}else{
		for(int i = 0 ; i < strlen(ch) - 1; i++){
			if(ch[i] == 32 && ch[i+1] != 32) num++;	
		}
		printf("%d", num+1);
	}
}

