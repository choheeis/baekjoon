#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	cin>>str;
	int alpa[26] = {0};
	for(int i = 0 ; i < str.length() ; i++){
		alpa[str.at(i) - 97]++;
	}
	for(int i = 0 ; i < 26 ; i++){
		printf("%d ", alpa[i]);
	}
}
