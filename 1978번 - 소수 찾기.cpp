#include<stdio.h>

bool isPrime(int a);

int main(){
	int n, count = 0;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &arr[i]);
		if(isPrime(arr[i])) count++;
	}
	printf("%d", count);
}

bool isPrime(int a){
	if((a != 2 && a%2 == 0) || a == 1) return false;
	else{
		for(int i = 2 ; i < a ; i++){
			if(a%i==0) return false;
		}
		return true;
	}
}
