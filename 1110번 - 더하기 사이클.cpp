#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int n1,n2;
	n1 = n/10;//2
	n2 = n%10;//6
	
	int sum=n1+n2;//8
	int num=0;
	
	int count = 0;
	while(num != n){
		num = n2*10 + sum%10;//68
		n1 = num/10;//6
		n2 = num%10;//8
		sum = (n1 + n2)%10;//4
		num = n2*10 + sum%10;
		count++;
		
	}	
	printf("%d", count+1); 
	
	
} 
