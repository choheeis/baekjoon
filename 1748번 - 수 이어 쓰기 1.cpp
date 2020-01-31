#include<iostream>
#include<string>
using namespace std;

//제곱 구하기  
int mul(int a, int b){
	int result = 1;
	for(int i = 0 ; i < b ; i++){
		result*=a;
	}
	return result;
}

int main(){
	int n;
	cin>>n;
	string str = to_string(n);
	int nSize = str.size();
	int result = 0;
	
	if(n < 10){
		result = 1*n;
	}else{
		for(int i = 0 ; i < nSize - 1 ; i++){
			result += (i+1)*(9*mul(10, i));
		}	
		result += nSize*(n - mul(10, nSize-1) + 1);
	}
	cout<<result;
}

// size가 3이면 1*9 + 2*90 + 3*900
