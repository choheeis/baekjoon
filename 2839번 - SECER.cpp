#include<stdio.h>

int main(){
	int input; 
	int a;
	int b; 
	int result1, result2, result;
	
	
	scanf("%d", &input);
	a = input/5; //5�� ���� �ִ� ��
	b = input/3; //3�� ���� �ִ� �� 
	
	for(int i = a ; a>0 ; a--){
		if((input-5*i)%3 != 0){
			continue;	
		}else{
			result1 = i+ (input-5*i)/3;
			break;
		}
	}
	
	for(int i = b ; b>0 ;b--){
		if((input-3*i)%5 != 0){
			continue;
		}else{
			result2 = i+(input-3*i)/3;
			break;
		}
	}
	
	if(result1<result2){
		result = result1;
		
	}else{
		result = result2;
	}
	printf("%d", result);
	 
	
}
