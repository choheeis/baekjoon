#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	string N;
	int B;
	cin>>N;
	scanf("%d", &B);
	int result = 0, j = 0;
	for(int i = N.length()-1 ; i >= 0 ; i--){
		int mul = 1;
		for(int j = 0 ; j < i ; j++){
			mul *= B;
		}
		if(N.at(j) >= 65 && N.at(j) <= 90 ){
			result = result + (N.at(j)-55)*mul;	
		}else{
			result = result + (N.at(j)-48)*mul;	
		}
		j++;
	}
	
	printf("%d", result);
}
