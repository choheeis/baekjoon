#include<iostream>
#include<string>
using namespace std;

int main(){
	string str1, str2;
	cin>>str1>>str2;
	
	// 최소, 최대값  
	string tmp1, tmp2;
	for(int i = 0 ; i < str1.size() ; i++){
		if(str1.at(i) == '5' || str1.at(i) == '6'){
			tmp1 += "5";
			tmp2 += "6";
		}else{
			tmp1 += str1.at(i);
			tmp2 += str1.at(i);
		}
	}
	
	string tmp3, tmp4; 
	for(int i = 0 ; i < str2.size() ; i++){
		if(str2.at(i) == '5' || str2.at(i) == '6'){
			tmp3 += "5";
			tmp4 += "6";
		}else{
			tmp3 += str2.at(i);
			tmp4 += str2.at(i);
		}
	}
	
	int num1, num2, num3, num4;
	num1 = stoi(tmp1);
	num2 = stoi(tmp2);
	num3 = stoi(tmp3);
	num4 = stoi(tmp4);

	cout<<num1 + num3<<' '<<num2 + num4;
	
}
