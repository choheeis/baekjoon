#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
	if(a.length() < b.length()){
		// 길이가 짧은 경우 1순위로 정렬 
		return 1;
	}else if(a.length() > b.length()){
		return 0;
	}else{
		// 길이가 같은 경우  
		return a < b;
	}
}

int main(){
	int N;
	cin>>N;
	vector<string> vec;
	for(int i = 0 ; i < N ; i++){
		string tmp;
		cin>>tmp;
		vec.push_back(tmp);
	}
	
	sort(vec.begin(), vec.end(), compare);
	
	for(int i = 0 ; i < N ; i++){
		if(i > 0 && vec[i] == vec[i-1]){
			continue;
		}else{
			cout<<vec[i]<<'\n';
		}
	}
	
} 
