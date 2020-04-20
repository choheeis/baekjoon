#include<iostream>
using namespace std;

const int arrSize = 123456*2 + 1;
int arr[arrSize];

int main(){
	
	// 에라토스테네스의 체  
	for(int i = 2 ; i <= arrSize ; i++){
		if(arr[i] == -1){
			continue;
		}else{
			for(int j = i + i ; j <= arrSize ; j = j + i){
				if(arr[j] != -1){
					arr[j] = -1;
				}
			}
		}
	}
	
	while(true){
		int n, count = 0;
		cin>>n;
		if(n == 0){
			return 0;
		}else{
			count = 0;
			for(int i = n + 1 ; i <= 2*n ; i++){
				if(arr[i] == 0){
					count++;
				}
			}
		}
		cout<<count<<'\n';
	}
}
