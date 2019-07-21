#include<stdio.h>
#include<string>
#include<vector>
#include<iostream>
using namespace std;

int main(){
	string str;
	cin>>str;
	vector<int> arr(str.length(), 0);
	for(int i = 0 ; i < str.length() ; i++){
		arr[i] = str.at(i);
	}
	
	for(int i = 0 ; i < str.length()/2 ; i++){
		if(arr[i] != arr[str.length()-1-i]){				
			printf("0");
			return 0;
		}
	}
	printf("1");
}
