#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<vector<int>> vecMinus(100001, vector<int>(0, 0));
vector<vector<int>> vecPlus(100001, vector<int>(0, 0));
int main(){
	int N;
	cin>>N;
	
	
	
	for(int i = 0 ; i < N ; i++){
		int x, y;
		cin>>x>>y;
		
		if(x < 0){
			x = x*-1;
			vecMinus[x].push_back(y);	
		}else{
			vecPlus[x].push_back(y);
		}
	}	
	
	for(int i = 0 ; i < 100001 ; i++){
		sort(vecMinus[i].begin(), vecMinus[i].end());
		sort(vecPlus[i].begin(), vecPlus[i].end());
	}
	
	for(int i = 100000 ; i >= 1 ; i--){
		if(vecMinus[i].size() != 0){
			for(int j = 0 ; j < vecMinus[i].size() ; j++){
				cout<<i*-1<<' '<<vecMinus[i][j]<<'\n';
			}
		}else{
			continue;
		}
	}
	
	for(int i = 0 ; i <= 100000 ; i++){
		if(vecPlus[i].size() != 0){
			for(int j = 0 ; j < vecPlus[i].size() ; j++){
				cout<<i<<' '<<vecPlus[i][j]<<'\n';
			}
		}else{
			continue;
		}
	}
	
	
	
} 
