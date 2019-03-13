#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	
	string str;
	cin>>str;
	int ok;
	
	for(int i=97 ; i<123;i++){
		for(int k=0 ; k<str.size() ;k++){
			if(i==str.at(k)){
				ok=k;
				break;
			}else{
				ok=-1;
			}
		}
		printf("%d ",ok);
	}
} 
