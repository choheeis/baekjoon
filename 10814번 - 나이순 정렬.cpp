#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int N;
	cin>>N;
	vector<vector<string>> vec(201);
	
	for(int i = 0 ; i < N ; i++){
		int age;
		string name;
		cin>>age>>name;
		
		vec[age].push_back(name);		
	}
	
	for(int i = 0 ; i <= 200 ; i++){
		for(int j = 0 ; j < vec[i].size() ; j++){
			cout<<i<<' '<<vec[i][j]<<'\n';
		}
	}
	
} 


