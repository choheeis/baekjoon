#include<stdio.h>

int main(){
	int C;
	scanf("%d", &C); // 맨 첫줄  
	float real[C];
	for(int j=0 ; j<C ; j++){
			int N;
	scanf("%d",&N); // 맨 앞  
	int num[N+1];
	int sum=0; 
	float avg;
	int count=0;
	
	for(int i = 0; i < N ; i++){
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	avg = (float)sum/N;
	
	for(int k = 0 ; k<N ; k++){
		if(num[k]>avg){
			count++;
		}
	}
	real[j] = (float)(count*100)/N;
	
	}
	for(int l = 0 ; l < C ; l++){
		printf("%.3f%%\n",real[l]);	
	}
	

}
