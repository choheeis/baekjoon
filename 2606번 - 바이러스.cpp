#include<iostream>
#include<vector>
using namespace std;

vector<int> link[101];
bool checked[101];
int count = 0;

void dfs(int x){
	if(checked[x] == true){
		return;
	}else{
		checked[x] = true;
		count++;
		for(int i = 0 ; i < link[x].size() ; i++){
			int y = link[x][i];
			dfs(y);
		}
	}
} 

int main(){
	int N, M;
	cin>>N;
	cin>>M;
	
	// ют╥б  
	for(int i = 0 ; i < M ; i++){
		int n1, n2;
		cin>>n1>>n2;
		
		link[n1].push_back(n2);
		link[n2].push_back(n1);
	}
	
	dfs(1);
	cout<<count-1;

}
