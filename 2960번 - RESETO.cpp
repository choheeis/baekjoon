#include<iostream>
using namespace std;

int arr[1001];

int main(){
	int N, K;
	cin>>N>>K;

	// 배열 초기화  
	for(int i = 1 ; i <= N ; i++){
		arr[i] = i;
	}	
	
	// 지우기  
	int count = 0;
	for(int i = 2 ; i <= N ; i++){
		if(arr[i] == -1){
			continue;
		}else{
			for(int j = i ; j <= N ; j = j + i){
				if(arr[j] == -1){
					continue;
				}else{
					arr[j] = -1;
					count++;
					if(count == K){
						cout<<j;
						return 0;
					}	
				}
				
			}
		}
	}
	
}
