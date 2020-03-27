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
		// �̹� �湮�� ������ ��� 
		return; 
	}else if(arr[a][b] == 1){
		// ó�� �湮�� ������ ���
		checked[a][b] = true;	// �湮ó��
		counting[k]++;			// ����ī����
		
		// �簢���� �� �������� �𼭸����� �ٸ��� ��� ȣ��  
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
	
	// 2���� �迭�� arr�� ������ �Է°� ����  
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
