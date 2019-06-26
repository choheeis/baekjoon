#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	int count[26] = {0,};
	int ch = 0, max = 0, index = 0, check = 0;
	cin>>str;
	for(int i = 0 ; i < str.length() ; i++){
		if(str.at(i) >=65 && str.at(i) <= 90){
			ch = str.at(i) - 65;	
		}else{
			ch = str.at(i) - 97;
		}
		count[ch]++;
	}
	
	
	for(int i = 0 ; i < 26 ; i++){
		if(max < count[i]){
			max = count[i];
			index = i;
		}
	}
	
	for(int i = 0 ; i < 26 ; i++){
		if(count[i] == max){
			check++;
		}
	} 
	
	if(check != 1){
		printf("?");
	}else{
		printf("%c", index+65);
	}
	
}
