#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	cin>>str;
	
	// 문자열에서 가장 처음 나오는 마이너스 인덱스 구하기  
	int first_minus = -1;
	for(int i = 0 ; i < str.length() ; i++){
		if(str.at(i) == '-'){
			first_minus = i;
			break;
		}
	}
	
	string tmp;
	int first_sum = 0; // 첫 번째 마이너스가 나오지 전까지 숫자들의 합  
	for(int i = 0 ; i < first_minus ; i++){
		if(str.at(i) == '+'){
			// + 인 경우  
			first_sum += stoi(tmp);
			tmp = "";
			continue;
		}else if(i == first_minus - 1){
			// 첫 번째로 나온 마이너스 바로 전 인덱스일 경우  
			tmp += str.at(i);
			first_sum += stoi(tmp);
		}else{
			// 숫자인 경우
			tmp += str.at(i);
		}
	}

	
	// 첫 번째로 마이너스가 나온 후 숫자들의 합 
	// 첫 번째로 마이너스가 나온 후는 마이너스가 나오든 플러스가 나오든 다 빼면 됨  
	string tmp2;
	int sum = 0;
	for(int i = first_minus + 1 ; i < str.length() ; i++){
		// 숫자일 경우
		if(str.at(i) != '+' && str.at(i) != '-'){
			if(i == str.length() - 1){
				// 숫자이면서 문자열의 맨 마지막일 경우  
				tmp2 += str.at(i);
				sum += stoi(tmp2);	
			}else{
				tmp2 += str.at(i);		
			}
			
		}else{
			// +나 -일 경우 
			sum += stoi(tmp2);
			tmp2 = "";
		}
		
	} 
	
	if(first_sum == 0){
		cout<<sum;
	}else{
		cout<<first_sum - sum;	
	}
	
	
}
