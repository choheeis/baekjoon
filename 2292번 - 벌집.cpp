#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	
	N -= 1;
	if(N == 0){
		cout<<1;
		return 0;
	}else{
		int count = 1;
		while(N > 0){
			N -= 6*count;	
			count++;
		}
		cout<<count;
	}
} 
