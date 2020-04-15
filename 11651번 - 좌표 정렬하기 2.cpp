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
		
		if(y < 0){
			y = y*-1;
			vecMinus[y].push_back(x);	
		}else{
			vecPlus[y].push_back(x);
		}
	}	
	
	for(int i = 0 ; i < 100001 ; i++){
		sort(vecMinus[i].begin(), vecMinus[i].end());
		sort(vecPlus[i].begin(), vecPlus[i].end());
	}
	
	for(int i = 100000 ; i >= 1 ; i--){
		if(vecMinus[i].size() != 0){
			for(int j = 0 ; j < vecMinus[i].size() ; j++){
				cout<<vecMinus[i][j]<<' '<<i*-1<<'\n';
			}
		}else{
			continue;
		}
	}
	
	for(int i = 0 ; i <= 100000 ; i++){
		if(vecPlus[i].size() != 0){
			for(int j = 0 ; j < vecPlus[i].size() ; j++){
				cout<<vecPlus[i][j]<<' '<<i<<'\n';
			}
		}else{
			continue;
		}
	}

} 
