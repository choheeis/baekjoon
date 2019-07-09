#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	int num1;
	string num2;
	scanf("%d", &num1);
	cin >> num2;
	int answer3, answer4, answer5, sum;
	answer3 = num1*(num2.at(0)-48);
	answer4 = num1*(num2.at(1)-48);
	answer5 = num1*(num2.at(2)-48);
	sum = answer3*100 + answer4*10 + answer5;
	printf("%d\n%d\n%d\n%d", answer5, answer4, answer3, sum);
	
} 
