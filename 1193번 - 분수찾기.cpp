#include<iostream>
#include<string> 
using namespace std;

int main(){
	int X;
	cin>>X;
	
	int i = 1;
	//X�� ���� ��, i�� �밢�� ��° ��  
	while(X > i){
		X -= i;
		i++;
	}
	
	//X�� ¦�� �϶�  
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
