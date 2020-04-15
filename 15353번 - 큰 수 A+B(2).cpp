#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){
	string str1, str2;
	cin>>str1>>str2;
	
	int max = 0;
	int i, j; // 항상 j가 i보다 더 작음  
	string strMax, strMin;
	if(str1.size() > str2.size()){
		max = str1.size();
		i = str1.size()-1;
		j = str2.size()-1;
		strMax = str1;
		strMin = str2;
	}else{
		max = str2.size();
		i = str2.size()-1;
		j = str1.size()-1;
		strMax = str2;
		strMin = str1;
	}
	
	
	int carry = 0;
	string result;
	while(i >= 0 || j >= 0){
		int num1, num2, sum;
		if(j < 0){
			num1 = strMax.at(i) - 48;
			sum = num1 + carry;
			if(sum >= 10){
				carry = 1;
				sum = sum - 10;
			}else{
				carry = 0;
			}
		}else{
			num1 = strMax.at(i) - 48;
			num2 = strMin.at(j) - 48;
			sum = num1 + num2 + carry;
			if(sum >= 10){
				carry = 1;
				sum = sum - 10;
			}else{
				carry = 0;
			}	
		}
		result += to_string(sum);
		i--;
		j--;
	}
	
	if(carry == 1){
		result += to_string(1);
	}
	
	reverse(result.begin(), result.end());
	cout<<result;
}
