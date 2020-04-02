#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int M, N, H;

int tomato[100][100][100];
int counting[100][100][100];
bool isChecked[100][100][100];
bool isAll = true;	// �丶�䰡 �̹� �� �;��ִ��� ���� üũ  
queue<pair<pair<int, int>, int>> q;

int tmpX[] = {0, -1, 0, 1, 0, 0};	// ����  
int tmpY[] = {1, 0, -1, 0, 0, 0};	// ���� 
int tmpZ[] = {0, 0, 0, 0, 1, -1};	// ���� 

void bfs(){
	
	while(q.empty() != true){
		int z = q.front().first.second;		// ���� 
		int y = q.front().first.first;		// ���� 
		int x = q.front().second;			// ���� 
		q.pop();
		
		for(int i = 0 ; i < 6 ; i++){
			int newX = x + tmpX[i];
			int newY = y + tmpY[i];
			int newZ = z + tmpZ[i];
			
			if(newX >= 0 && newX < M && newY >= 0 && newY < N && newZ >= 0 && newZ < H){
				if(tomato[newZ][newY][newX] == 0 && isChecked[newZ][newY][newX] == false){
					pair <pair<int, int>, int> p;
					//h�� ����, j�� ����, i�� ����  
					p = make_pair(make_pair(newY, newZ), newX);
						
					// �丶�� ã�Ƽ� ť�� ����  
					q.push(p);
					isChecked[newZ][newY][newX] = true;
					tomato[newZ][newY][newX] = 1; // ����ǥ��  
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
				tomato[i][j][h] = tmp;	// ����, ����, ���� ��  
				if(tmp != 1){ 
					isAll = false;
				}
			}
		}
	}
	
	
	if(isAll == true){
		// �丶�䰡 �̹� �� �;��ִ� ������ ���  
		cout<<1;
		return 0; 
	}else{
		for(int i = 0 ; i < H ; i++){
			for(int j = 0 ; j < N ; j++){
				for(int h = 0 ; h < M ; h++){
					if(tomato[i][j][h] == 1){
						pair <pair<int, int>, int> p;
						//h�� ����, j�� ����, i�� ����  
						p = make_pair(make_pair(j, i), h);
						
						// �丶�� ã�Ƽ� ť�� ����  
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
