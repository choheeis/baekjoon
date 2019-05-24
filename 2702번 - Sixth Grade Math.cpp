#include<stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main(){
	int n, num1, num2;
	scanf("%d", &n);
	
	for(int i = 0 ; i < n ; i++){
		scanf("%d %d", &num1, &num2);
		if(i == n-1){
			printf("%d %d", lcm(num1, num2), gcd(num1, num2));
			break;		
		}
		printf("%d %d\n", lcm(num1, num2), gcd(num1, num2));		
	}
	
}

int gcd(int a, int b){
	int min, temp;
	
	min = (a<b)?a:b;
	
	for(int i = 1 ; i <= min ; i++){
		if(a%i == 0 && b%i == 0){
			temp = i;
		}
	}
	
	return temp;
} 

int lcm(int a, int b){
	int max, temp;
	
	max = (a>b)?a:b;
	
	for(int i = max ;; i++){
		if(i%a == 0 && i%b == 0){
			temp = i;
			break;
		}
	}
	
	return temp;
	
}
