#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	int N, count = 0;
	scanf("%d", &N);
	for(int i = 0 ; i < N ; i++){
		string str;
		cin>>str;
		int alp[26] = {0};
		for(int j = 0 ; j < str.length()-1 ; j++){
			if(str.at(j) != str.at(j+1)) alp[str.at(j)-97]++;
		}
		alp[str.at(str.length()-1)-97]++;
		
		bool check = true;
		for(int i = 0  ; i < 26 ; i++){
			if(alp[i] > 1){
				check = false;
				break;
			}
		}
		if(check == true) count++; 
	}
	printf("%d", count);
}
