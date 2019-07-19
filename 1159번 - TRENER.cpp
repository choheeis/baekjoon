#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
	int N;
	scanf("%d", &N);
	int alpa[26] = {0};
	for(int i = 0 ; i < N ; i++){
		string last_name; //¼º. 
		cin>>last_name;
		alpa[last_name.at(0) - 97]++;
	}
	int count = 0;
	for(int i = 0 ; i < 26 ; i++){
		if(alpa[i] >= 5){
			printf("%c", i+97);
			count++;
		}
	}
	if(count == 0){
		printf("PREDAJA");
	}
}
