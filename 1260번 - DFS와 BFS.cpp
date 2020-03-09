#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

bool bfs_checked[1001];
bool dfs_checked[1001];
vector<int> vec[1001];

void bfs(int start){
	queue<int> myQueue;
	myQueue.push(start);
	bfs_checked[start] = true;
	
	while(myQueue.empty() != true){
		int one = myQueue.front();
		myQueue.pop();
		cout<<one<<' ';
		
		for(int i = 0 ; i < vec[one].size() ; i++){
			int tmp = vec[one][i];
			
			if(bfs_checked[tmp] == false){
				myQueue.push(tmp);
				bfs_checked[tmp] = true;
			}			
		}
	}
}

void dfs(int x){
	if(dfs_checked[x] == true){
		return;
	}else{
		dfs_checked[x] = true;
		cout<<x<<' ';
		
		for(int i = 0 ; i < vec[x].size() ; i++){
			int y = vec[x][i];
			dfs(y);
		}
	}
}

int main(){
	int N, M, V;
	cin>>N>>M>>V;
	
	
	// 입력  
	for(int i = 0 ; i < M ; i++){
		int num1, num2;
		cin>>num1>>num2;
		
		vec[num1].push_back(num2);
		vec[num2].push_back(num1);
	}
	
	// 정렬 (작은 수 부터 뽑기 위함) 
	for(int i = 1 ; i < 1001 ; i++){
		sort(vec[i].begin(), vec[i].end());
	}
		
	dfs(V);
	cout<<'\n';
	bfs(V);
	
} 
