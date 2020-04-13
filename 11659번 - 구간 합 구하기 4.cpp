#include<iostream>
#include<vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, M;
	cin>>N>>M;
	
	vector<int> numVec(N, 0);
	
	for(int i = 0 ; i < N ; i++){
		int tmp;
		cin>>tmp;
		numVec[i] = tmp;
		
		if(i == 0)
			continue;
		else
			numVec[i] = numVec[i] + numVec[i-1];
	}

	
	for(int i = 0 ; i < M ; i++){
		int start, end;
		cin>>start>>end;
		
		if(start == 1){
			cout<<numVec[end-1]<<'\n';
		}else{
			cout<<numVec[end-1] - numVec[start-2]<<'\n';
		}
	}
} 
