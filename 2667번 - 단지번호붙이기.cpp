#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N; 
int arr[25][25];
int checked[25][25];
int k;
int counting[25*25]; 

void dfs(int a, int b){
	if(checked[a][b] == true || arr[a][b] == 0){
		// 이미 방문한 원소일 경우 
		return; 
	}else if(arr[a][b] == 1){
		// 처음 방문한 원소일 경우
		checked[a][b] = true;	// 방문처리
		counting[k]++;			// 개수카운팅
		
		// 사각형의 각 테투리와 모서리마다 다르게 재귀 호출  
		if(b == 0){
			if(a == 0){
				dfs(a, b+1);
				dfs(a+1, b);
			}else if(a == N-1){
				dfs(a-1, b);
				dfs(a, b+1);
			}else if(a >= 1 && a < N-1){
				dfs(a-1, b);
				dfs(a, b+1);
				dfs(a+1, b);
			}
		} else if(a == 0){
			if(b == N-1){
				dfs(a, b-1);
				dfs(a+1, b);
			}else if(b >= 1 && b < N-1){
				dfs(a, b-1);
				dfs(a+1, b);
				dfs(a, b+1);
			}
		} else if(a == N-1){
			if(b >= 1 && b < N-1){
				dfs(a, b-1);
				dfs(a-1, b);
				dfs(a, b+1);
			}else if(b == N-1){
				dfs(a, b-1);
				dfs(a-1, b);
			}
		} else if(b == N-1){
			dfs(a-1, b);
			dfs(a, b-1);
			dfs(a+1, b);
		} else{
			dfs(a-1, b);
			dfs(a, b-1);
			dfs(a+1, b);
			dfs(a, b+1);
		}
	}
}

int main(){
	cin>>N;
	
	// 2차원 배열인 arr에 문제의 입력값 저장  
	for(int i = 0 ; i < N ; i++){
		string str;
		cin>>str;
		for(int j = 0 ; j < str.size() ; j++){
			int num = str.at(j) - 48;
			arr[j][i] = num;
		} 
	}
	
	vector<int> vec;
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < N ; j++){
			if(arr[j][i] == 1 && checked[j][i] == false){
				dfs(j, i);
				k++;
			}else{
				continue;
			}
		}
	}
	
	cout<<k<<'\n';
	sort(counting, counting + k);
	for(int i = 0 ; i < k ; i++){
		cout<<counting[i]<<'\n';
	}
	
	
}
