#include<iostream>
using namespace std;

// N은 세로, M은 가로 
int N, M;
int arr[300][300]; 

int main(){
	cin>>N>>M;
	
	// 입력 
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < M ; j++){
			int tmp;
			cin>>tmp;
			arr[i][j] = tmp;
		}
	}
	
	int K;
	cin>>K;
	
	for(int h = 0 ; h < K ; h++){
		int i, j, x, y;
		cin>>i>>j>>x>>y;
		
		int sum = 0;
		for(int q = i-1 ; q <= x-1 ; q++){
			for(int w = j-1 ; w <= y-1 ; w++){
				sum += arr[q][w];
			}
		}
		cout<<sum<<'\n';
	}
	
}
