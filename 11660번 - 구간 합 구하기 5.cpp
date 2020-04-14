#include<iostream>
using namespace std;

int numArr[1025][1025];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,M;
	cin>>N>>M;
	
	// 2차원 배열에 원소들 입력  
	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= N ; j++){
			int tmp;
			cin>>tmp;
			if(i == 1 && j == 1){
				numArr[1][1] = tmp;
			}else if(j == 1){
				numArr[1][i] = numArr[N][i-1] + tmp;
			}else{
				numArr[j][i] = numArr[j-1][i] + tmp;
			}
		}
	}
	
	
	
	for(int i = 0 ; i < M ; i++){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		
		int sum = 0;
		if(y1 == 1){
			for(int j = x1 ; j <= x2 ; j++){
				if(j == 1){
					sum += numArr[y2][j];
				}else{
					sum += numArr[y2][j] - numArr[N][j-1];	
				}
			}
		}else{
			for(int j = x1 ; j <= x2 ; j++){
				sum += numArr[y2][j] - numArr[y1 - 1][j];
			}
		}
		cout<<sum<<'\n';
	}
	

}
