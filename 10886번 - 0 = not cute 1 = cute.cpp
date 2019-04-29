#include<stdio.h>

int main(){
	int n1, n2;
	int count0 = 0, count1 = 0; // 이거 적기 
	scanf("%d", &n1);
	for(int i = 0 ; i < n1 ; i++){
		scanf("%d",&n2);
		if(n2 == 0){
			count0++;
		}else{
			count1++;
		} 
	}
	if(count0 > count1){
		printf("Junhee is not cute!");
	}else{
		printf("Junhee is cute!");
	}	
}
