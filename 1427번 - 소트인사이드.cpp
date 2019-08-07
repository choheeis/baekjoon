#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
	string str;
	cin>>str;
	int arr[str.length()] = {0};
	for(int i = 0 ; i < str.length() ; i++){
		arr[i] = str.at(i);
	}
	for(int i = 0 ; i < str.length() ; i++){
		for(int j = 0 ; j < str.length()-1 ; j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for(int i = str.length()-1 ; i >= 0 ; i--){
		printf("%d", arr[i]-48);
	}
} 
