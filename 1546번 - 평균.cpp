#include<stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	int arr[num+1];
	double max;
	int result=0;
	int sum; 
	
	for(int i=0; i<num; i++){
		scanf("%d",&arr[i]); 
	}
	
	max=arr[0];
	for(int i=1; i<num; i++){
		if(arr[i]>max){
			max = arr[i];
		} 
	}
	
	for(int i=0 ; i<num ; i++){
		result+=arr[i];
	}
	result=(result/max)*100;
		printf("%.2f",(double)result/num);

}

