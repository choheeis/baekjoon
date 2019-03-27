#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	
	for(int i = 0 ; i < n ; i++){
		string str;
		cin>>str;
		int a,b;
		a = str.at(0) - 48; 
		b = str.at(2) - 48;
		printf("%d\n", a+b);
	}
	
	
}
