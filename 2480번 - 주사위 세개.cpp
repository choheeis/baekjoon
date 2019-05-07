#include<stdio.h>

int main(){
	int n[3];
	int max=0;
	for(int i = 0 ; i < 3 ; i++){
		scanf("%d", &n[i]);	
	}
	
	
	if(n[0] == n[1] && n[1] == n[2]){
		printf("%d",10000 + n[0]*1000);
	}else if(n[0] == n[1] && n[1] != n[2]){
		printf("%d",1000+n[0]*100);
	}else if(n[0] == n[2] && n[0] != n[1]){
		printf("%d", 1000 + n[0]*100);
	}else if(n[1] == n[2] && n[0] != n[1]){
		printf("%d", 1000 + n[1]*100);
	}else{
		max = n[0];
		for(int i = 1 ; i < 3; i++){
			if(max<n[i]){
				max = n[i];
			}
		}
		printf("%d", max*100);
	}
} 
