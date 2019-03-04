#include<stdio.h>
#include<iostream>
using namespace std;


int main(){
	string str;
	

	cin>>str;
	int count;
	for( int i = 1 ;i<=str.length();i++){
			if(i%10 == 0){
				cout<<str.substr(i-10,10);
				cout<<"\n";
				count = i;
			}
		
	}
	cout<<str.substr(count);
	
}
