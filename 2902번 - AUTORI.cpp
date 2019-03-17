#include<stdio.h>

int main(){
	char ch[101]={0,}; 
	for(int i = 0 ; i < 100 ; i++){
		scanf("%[^\n]c", ch); 
	}
	for(int i = 0 ; i < 100 ; i++){
		if(ch[i] > 64 && ch[i] < 91){
			printf("%c",ch[i]);
		}
	}
	
	
}
