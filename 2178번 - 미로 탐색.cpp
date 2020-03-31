#include<iostream>
#include<string>
#include<queue>
using namespace std;

int N, M;
bool checked[100][100];
int arr[100][100];
int fourX[4] = {0, -1, 0, 1};
int fourY[4] = {1, 0, -1, 0};
int count[100][100];

void bfs(int startX, int startY){
	queue<pair<int, int>> q;
	q.push(make_pair(startX, startY));
	checked[startX][startY] = true;
	
	while(q.empty() != true){
		int x = q.front().first;
		int y = q.front().second;
		
		if(x == M-1 && y == N-1){
			break;
		}else{
			q.pop();
			for(int i = 0 ; i < 4 ; i++){
				int tmpX = x + fourX[i];
				int tmpY = y + fourY[i];
				if(tmpX >= 0 && tmpX < M && tmpY >= 0 && tmpY < N && arr[tmpX][tmpY] == 1 && checked[tmpX][tmpY] == false){
					q.push(make_pair(tmpX, tmpY));
					checked[tmpX][tmpY] = true;
					count[tmpX][tmpY] = count[x][y] + 1;
				}
			}	
		}
	}
}

int main(){
	cin>>N>>M;
	
	for(int i = 0 ; i < N ; i++){
		string str;
		cin>>str;
		for(int j = 0 ; j < str.length() ; j++){
			arr[j][i] = str.at(j) - 48;
		}
	}
	
	count[0][0] = 1;
	bfs(0, 0);
	cout<<count[M-1][N-1];
	
}
