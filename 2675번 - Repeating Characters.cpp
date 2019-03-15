#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int P;
	scanf("%d", &P);	
	
	for(int i = 0 ; i < P ; i++){
		int N; 
		scanf("%d", &N);
		string str;
		cin>>str; 
		for(int k = 0 ; k < str.size() ; k++){
			for(int j = 0 ; j < N ; j++){
				printf("%c",str.at(k));	
				
			}
			
		}
		printf("\n");
	}
	
		
}
