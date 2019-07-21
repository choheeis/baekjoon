#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
	string str;
	cin>>str;
	int count = 0;
	for(int i = 0 ; i < str.length() ; i++){
		if(str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' ||
			str.at(i) == 'o' || str.at(i) == 'u'){
				count++;
			}
	}
	printf("%d", count);
} 
