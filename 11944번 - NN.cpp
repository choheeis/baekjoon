#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
	string str;
	int len;
	cin>>str;
	int rotation = stoi(str);
	scanf("%d", &len);
	
	string result;
	for(int i = 0 ; i < rotation ; i++){
		for(int j = 0 ; j < str.length() ; j++){
			if(result.length() >= len){
				break;
			}else{
				result.insert(result.length(), 1, str.at(j));	
			}
		}
		
	}
	
	cout<<result;
}
