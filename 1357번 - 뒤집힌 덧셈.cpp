#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int Rev(string a);
int main(){
	string X, Y;
	cin>>X>>Y;
	int p; // 최종 인자(int형).
	p = Rev(X) + Rev(Y);
	string final;
	final = to_string(p);
	printf("%d", Rev(final));
	
}

int Rev(string a){
	int sum = 0, k = a.length()-1;
	for(int i = 1 ; i <= a.length() ; i++){
		int mul = 1;
		for(int j = a.length()-i ; j > 0 ; j--){
			mul *= 10;
		}
		sum += (a.at(k)-48)*mul;
		k--;
	}
	return sum;
}
