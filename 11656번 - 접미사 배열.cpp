#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
	return a < b;	
}

int main(){
	string str;
	cin>>str;
	
	vector<string> vec;
	for(int i = str.length() - 1 ; i >= 0 ; i--){
		vec.push_back(str.substr(i, string::npos));
	}
	
	sort(vec.begin(), vec.end(), compare);
	
	for(int i = 0 ; i < str.length() ; i++){
		cout<<vec[i]<<'\n';
	}
} 
