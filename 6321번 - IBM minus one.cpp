#include<stdio.h>
#include<string.h>
int main(){
	int n, count = 0;
	char ch[51], re1[51], re2[51];
	int n2;
	scanf("%d", &n);
	for(int i = 0 ; i < n ; i++){
		scanf("%s", ch);
		printf("String #%d\n", i+1);
		count++;
		for(int j = 0 ; j < strlen(ch) ; j++){
			if(ch[j]=='Z') ch[j] = 64; 
			printf("%c", ch[j]+1);
		}
		if(count == n) return 0;
		printf("\n\n");
	}
}
