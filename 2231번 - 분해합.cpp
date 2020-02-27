#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	string str;
	cin>>str;
	
	vector<int> vec;
	int num = stoi(str);
	for(int i = 1 ; i <= num ; i++){
		string tmp = to_string(i);
		int result = i;
		for(int j = 0 ; j < tmp.length() ; j++){
			result += tmp.at(j) - 48;	
		}	
		
		
		if(result == num){
			vec.push_back(i);		
		}
	}
	
	if(vec.size() == 0){
		cout<<0;
		return 0;
	}else{
		int min = num;
		for(int i = 0 ; i < vec.size() ; i++){
			if(min >= vec[i]){
				min = vec[i];
			}
		}
		cout<<min;	
	}
	
} 
