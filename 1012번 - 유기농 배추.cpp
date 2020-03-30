#include<iostream>
using namespace std;

int M, N, K;
int arr[50][50];
bool checked[50][50];

void dfs(int x, int y){
	if(checked[x][y] == true){
		return;
	}else if(arr[x][y] == 1){
		checked[x][y] = true;
		if(x == 0){
			if(y == 0){
				dfs(x+1, y);
				dfs(y+1, x);
			}else if(y == N-1){
				dfs(x, y-1);
				dfs(x+1, y);
			}else{
				dfs(x, y-1);
				dfs(x+1, y);
				dfs(x, y+1);
			}
		}else if(y == 0){
			if(y == M-1){
				dfs(x-1, y);
				dfs(x, y+1);
			}else{
				dfs(x-1, y);
				dfs(x, y+1);
				dfs(x+1, y);
			}
		}else if(x == M-1){
			if(y == N-1){
				dfs(x, y-1);
				dfs(x-1, y);
			}else{
				dfs(x, y-1);
				dfs(x-1, y);
				dfs(x, y+1);
			}
		}else if(y == N-1){
			dfs(x-1, y);
			dfs(x, y-1);
			dfs(x+1, y);
		}else{
			dfs(x, y-1);
			dfs(x+1, y);
			dfs(x, y+1);
			dfs(x-1, y);
		}
	}
}

int main(){
	int T;
	cin>>T;
	
	for(int i = 0 ; i < T ; i++){
		int count = 0;
		cin>>M>>N>>K;
		for(int j = 0 ; j < K ; j++){
			int m, n;
			cin>>m>>n;
			
			arr[m][n] = 1;
		}
		
		
		for(int x = 0 ; x < M ; x++){
			for(int y = 0 ; y < N ; y++){
				if(checked[x][y] == false && arr[x][y] == 1){
					dfs(x, y);
					count++;
				}
			}
		}
		
		cout<<count<<'\n';
		
		for(int x = 0 ; x < M ; x++){
			for(int y = 0 ; y < N ; y++){
				if(arr[x][y] == 1){
					arr[x][y] = 0;	
				}
				if(checked[x][y] == true){
					checked[x][y] = false;	
				}	
			}
		}
	}

} 
