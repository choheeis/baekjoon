#include<iostream>
using namespace std;

int arr[10000001];

int main(){
	int M, N;
	cin>>M>>N;
	
	for(int i = 2 ; i <= 1000000 ; i++){
		arr[i] = i;
	}	
	 
	// 에라토스테네스의 체  
	for(int i = 2 ; i <= 1000000 ; i++){
		if(arr[i] == -1){
			continue;
		}else{
			for(int j = i + i ; j <= 1000000 ; j = j + i){
				if(arr[j] == -1){
					continue;
				}else{
					arr[j] = -1;	
				}
			}
		}
	}
	
	for(int i = M ; i <= N ; i++){
		// 1은 소수가 아님  
		if(i == 1)
			continue;
		else if(arr[i] != -1){
			cout<<arr[i]<<'\n';
		}
	}
}
