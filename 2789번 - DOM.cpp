#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	cin>>str;
	
	string result;
	for(int i = 0 ; i < str.size() ; i++){
		if(str.at(i) != 'C' &&
		str.at(i) != 'A' &&
		str.at(i) != 'M' &&
		str.at(i) != 'B' &&
		str.at(i) != 'R' &&
		str.at(i) != 'I' &&
		str.at(i) != 'D' &&
		str.at(i) != 'G' &&
		str.at(i) != 'E'){
			result += str.at(i);
		}
	}
	
	cout<<result;
}
