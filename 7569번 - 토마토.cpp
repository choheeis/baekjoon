#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int M, N, H;

int tomato[100][100][100];
int counting[100][100][100];
bool isChecked[100][100][100];
bool isAll = true;	// 토마토가 이미 다 익어있는지 상태 체크  
queue<pair<pair<int, int>, int>> q;

int tmpX[] = {0, -1, 0, 1, 0, 0};	// 가로  
int tmpY[] = {1, 0, -1, 0, 0, 0};	// 세로 
int tmpZ[] = {0, 0, 0, 0, 1, -1};	// 높이 

void bfs(){
	
	while(q.empty() != true){
		int z = q.front().first.second;		// 높이 
		int y = q.front().first.first;		// 세로 
		int x = q.front().second;			// 가로 
		q.pop();
		
		for(int i = 0 ; i < 6 ; i++){
			int newX = x + tmpX[i];
			int newY = y + tmpY[i];
			int newZ = z + tmpZ[i];
			
			if(newX >= 0 && newX < M && newY >= 0 && newY < N && newZ >= 0 && newZ < H){
				if(tomato[newZ][newY][newX] == 0 && isChecked[newZ][newY][newX] == false){
					pair <pair<int, int>, int> p;
					//h가 가로, j가 세로, i가 높이  
					p = make_pair(make_pair(newY, newZ), newX);
						
					// 토마토 찾아서 큐에 넣음  
					q.push(p);
					isChecked[newZ][newY][newX] = true;
					tomato[newZ][newY][newX] = 1; // 익음표시  
					counting[newZ][newY][newX] = counting[z][y][x] + 1;
				}
			}
		}
	}
}

int main(){
	cin>>M>>N>>H;
	
	for(int i = 0 ; i < H ; i++){
		for(int j = 0 ; j < N ; j++){
			for(int h = 0 ; h < M ; h++){
				int tmp;
				cin>>tmp;
				tomato[i][j][h] = tmp;	// 높이, 세로, 가로 순  
				if(tmp != 1){ 
					isAll = false;
				}
			}
		}
	}
	
	
	if(isAll == true){
		// 토마토가 이미 다 익어있는 상태일 경우  
		cout<<1;
		return 0; 
	}else{
		for(int i = 0 ; i < H ; i++){
			for(int j = 0 ; j < N ; j++){
				for(int h = 0 ; h < M ; h++){
					if(tomato[i][j][h] == 1){
						pair <pair<int, int>, int> p;
						//h가 가로, j가 세로, i가 높이  
						p = make_pair(make_pair(j, i), h);
						
						// 토마토 찾아서 큐에 넣음  
						q.push(p);
						isChecked[i][j][h] = true;
					}
				}
			}
		}
		
		bfs();	
	}
	
	
	
	int max = 0;
	for(int i = 0 ; i < H ; i++){
		for(int j = 0 ; j < N ; j++){
			for(int h = 0 ; h < M ; h++){
				if(tomato[i][j][h] == 0){
					cout<<-1;
					return 0;
				}
				if(max < counting[i][j][h]){
					max = counting[i][j][h];
				}
			}
		}
	}
	
	cout<<max;
	
}
