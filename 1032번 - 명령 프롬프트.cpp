#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int N;
	cin>>N;
	
	vector<string> vec;
	for(int i = 0 ; i < N ; i++){
		string tmp;
		cin>>tmp;
		vec.push_back(tmp);
	}
	string result;
	for(int i = 0 ; i < vec[0].size() ; i++){
		int count = 0;
		for(int j = 0 ; j < N ; j++){
			if(vec[j][i] == vec[0][i]){
				count++;
			}
		}
		if(count == N){
			result += vec[0][i];
		}else{
			result += '?';
		}
	}
	
	cout<<result;
} 
