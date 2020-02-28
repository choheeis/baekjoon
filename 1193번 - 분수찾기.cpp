#include<iostream>
#include<string> 
using namespace std;

int main(){
	int X;
	cin>>X;
	
	int i = 1;
	//X가 남은 수, i는 대각선 번째 수  
	while(X > i){
		X -= i;
		i++;
	}
	
	//X가 짝수 일때  
	string result;
	if(i%2 == 0){
		result += to_string(X);
		result += "/";
		result += to_string(i + 1 - X);
	}else{
		result += to_string(i + 1 - X);
		result += "/";
		result += to_string(X);
	} 

	cout<<result;
	
	
}
