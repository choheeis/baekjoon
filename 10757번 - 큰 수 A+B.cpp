#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
	string str1, str2;
	cin>>str1>>str2;
	
	int minLen = 0, maxLen = 0;
	string maxString;
	if(str1.length() > str2.length()){
		maxLen = str1.length();
		minLen = str2.length();
		maxString = str1;
	}else{
		maxLen = str2.length();
		minLen = str1.length();
		maxString = str2;
	}
	int count = 0, i = 0;
	bool carry = false;
	string result;
	while(minLen > count){
		int num1 = str1.at(str1.length()-1-i)-'0';
		int num2 = str2.at(str2.length()-1-i)-'0';
		if(carry == true){
			if(num1 + num2 + 1 >= 10){
				carry = true;
				result.insert(0,1,(1+num1+num2)-10 + '0');	
			}else{
				carry = false;
				result.insert(0,1,num1+num2+1 + '0');	
			}
		}else{
			if(num1 + num2 >= 10){
				carry = true;
				result.insert(0,1,(num1+num2)-10+'0');	
			}else{
				carry = false;
				result.insert(0,1,num1+num2+'0');	
			}
		}
		count++;
		i++;
	}
	
	int add = maxLen - minLen;
	
	for(int i = add-1 ; i >= 0 ; i--){
		int num1 = maxString.at(i)-'0';
		if(carry == true){
			if(num1 + 1 >= 10){
				carry = true;
				result.insert(0,1,(1+num1)-10 + '0');	
			}else{
				carry = false;
				result.insert(0,1,num1+1+'0');	
			}
		}else{
			if(num1 >= 10){
				carry = true;
				result.insert(0,1,num1-10 + '0');	
			}else{
				carry = false;
				result.insert(0,1,num1+'0');	
			}
		}
	}	
	
	if(carry == true){
		result.insert(0, 1, 1 + '0');
	}
	cout<<result;
} 
