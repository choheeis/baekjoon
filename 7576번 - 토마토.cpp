#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int M, N;

int arr[1000][1000];
bool checked[1000][1000];
vector<pair<int, int>> oneLocation;
queue<pair<int, int>> q;

const int fourX[4] = {0, 1, 0, -1};
const int fourY[4] = {-1, 0, 1, 0};

int count[1000][1000];

void bfs(){

	
	while(q.empty() != true){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		for(int i = 0 ; i < 4 ; i++){
			int tmpX = x + fourX[i];
			int tmpY = y + fourY[i];
				
			if(tmpX >= 0 && tmpX < M && tmpY >= 0 && tmpY < N){
				if(checked[tmpX][tmpY] == false && arr[tmpX][tmpY] == 0){
					q.push(make_pair(tmpX, tmpY));
					checked[tmpX][tmpY] = true;
					count[tmpX][tmpY] = count[x][y] + 1;	
				}
			} 
		}	
	}
}

int main(){
	cin>>M>>N;
	
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < M ; j++){
			int tmp;
			cin>>tmp;

			arr[j][i] = tmp;
			if(tmp == 1){
				q.push(make_pair(j,i));
				checked[j][i] = true;
			}
		}
	}
	
	bfs();
	
	int max = 0;
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < M ; j++){
			if(max < count[j][i]){
				max = count[j][i];
			}
		}
	}
	
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < M ; j++){
			if(arr[j][i] == 0 && checked[j][i] == false){
				cout<<-1;
				return 0;				
			}
		}
	}
	
	cout<<max;	
	
}
