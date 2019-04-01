#include<stdio.h>

int main(){
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);	// 엔터 입력 쓰기(스페이스 입력도 가능)
	int result = n1*n2*n3;
	int count = 0;
	
	for(int i = 0 ; ;i++){
		
		result = result/10; 
		count++;
		if(result/10 == 0){
			break;
		}
	}
	result = n1*n2*n3;
	//count=3	
	int divide = 1;	
	for(int i = 0 ; i < count ; i++){
		divide = divide*10;
	}
	//divide=1000
	int n[11] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int a=0;
	for(int i = 0 ; i <= count ; i++){
		a = result/divide;
		n[i] = a;
		result = result % divide;
		divide = divide/10;
		if(result == 1){
			break;
		}
	}
	int b[11]={0,};
	for(int i = 0 ; i < 10 ; i++){
		if(n[i]==0){
			b[0]++;
		}else if(n[i]==1){
			b[1]++;
		}else if(n[i]==2){
			b[2]++;
		}else if(n[i]==3){
			b[3]++;
		}else if(n[i]==4){
			b[4]++;
		}else if(n[i]==5){
			b[5]++;
		}else if(n[i]==6){
			b[6]++;
		}else if(n[i]==7){
			b[7]++;
		}else if(n[i]==8){
			b[8]++;
		}else if(n[i]==9){
			b[9]++;
		}
	}
	for(int i = 0 ; i < 10 ; i++){
		printf("%d\n",b[i]);
	}
	
	
	
	 
} 
