#include<iostream>
using namespace std;

int arr[10000001];

int main(){
	int M, N;
	cin>>M>>N;
	
	for(int i = 2 ; i <= 1000000 ; i++){
		arr[i] = i;
	}	
	 
	// �����佺�׳׽��� ü  
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
		// 1�� �Ҽ��� �ƴ�  
		if(i == 1)
			continue;
		else if(arr[i] != -1){
			cout<<arr[i]<<'\n';
		}
	}
}
