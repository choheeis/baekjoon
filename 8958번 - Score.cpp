#include<stdio.h>
#include<string.h>

int main(){
	int n, num = 0, sum = 0;
	scanf("%d", &n);
	char ch[80];
	for(int i = 0 ; i < n ; i++){
		scanf("%s", ch);
		for(int j = 0 ; j < strlen(ch) ; j++){
			if(ch[j] == 'O'){
				num++;
				sum += num;
			}else{
				num = 0;
			}
		}
		if(i == n-1){
			printf("%d",sum);
			return 0;
		}
		printf("%d\n", sum);
		sum = 0;
		num = 0;
	}	
	
}
