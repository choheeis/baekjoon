#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	cin>>str;
	
	string result;
	for(int i = 0 ; i < str.length() ; i++){
		if(str.at(i) == 'A'){
			result += "X";
		}else if(str.at(i) == 'B'){
			result += "Y";
		}else if(str.at(i) == 'C'){
			result += "Z";
		}else{
			result += str.at(i) - 3;
		}
	}
	cout<<result;
}
