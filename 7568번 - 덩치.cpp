#include<iostream>
#include<vector>
using namespace std;

int main(){
	int N;
	cin>>N;
	vector<vector<int>> vec(2, vector<int>(N, 0));
	
	for(int i = 0 ; i < N ; i++){
		int x,y;
		cin>>x>>y;
		vec[0][i] = x;
		vec[1][i] = y;
	}
		
	for(int i = 0 ; i < N ; i++){
		int max_x = vec[0][i];
		int max_y = vec[1][i];
		int count = 0;
		for(int j = 0 ; j < N ; j++){
			if(i == j){
				continue;
			}
			if(max_x < vec[0][j] && max_y < vec[1][j]){
				count++;
			}
		}
		cout<<count + 1<<' ';
		
	}
	
}
