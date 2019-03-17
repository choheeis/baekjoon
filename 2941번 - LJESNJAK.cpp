#include<stdio.h>
#include<string.h>

int main(){
	char ch[101]={0,};
	int count=0;
	for(int i = 0 ; i < 100 ; i++){
		scanf("%[^\n]c",&ch);
	}
	for(int i = 0 ; i < 99 ; i++){
		if(ch[i] == 'c' && ch[i+1]== '='){
			count++;
		}else if(ch[i] == 'c' && ch[i+1]== '-'){
			count++;
		}else if(ch[i] == 'd' && ch[i+1]== '-'){
			count++;
		}else if(ch[i] == 'l' && ch[i+1]== 'j'){
			count++;
		}else if(ch[i] == 'n' && ch[i+1]== 'j'){
			count++;
		}else if(ch[i] == 's' && ch[i+1]== '='){
			count++;
		}else if(ch[i] == 'z' && ch[i+1]== '=' ){
			count++;
		}
	}
	for(int i = 0 ; i < 98 ; i++){
		if(ch[i] == 'd' && ch[i+1] == 'z' && ch[i+2] == '='){
			count++;
		}
	}
	
	printf("%d",strlen(ch)-count);
}


