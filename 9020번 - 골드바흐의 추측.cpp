#include<iostream>
using namespace std;

const int arrSize = 10000*2 + 1;
int arr[arrSize];

int main(){
	int T;
	cin>>T;

	// 에라토스테네스의 체  
	for(int i = 2 ; i <= arrSize ; i++){
		if(arr[i] != -1){
			for(int j = i + i ; j <= arrSize ; j = j + i){
				if(arr[j] != -1){
					arr[j] = -1;
				}
			}
		}
	}
		
	for(int i = 0 ; i < T ; i++){
		int n;
		cin>>n;
		
		int min = 100000;
		int n1, n2;
		for(int j = n-1 ; j >= 2 ; j--){
			if(arr[j] != -1){
				int another = n - j;
				
				if(arr[another] != -1 && j >= another){
					int tmp = j - another;
					if(min > tmp){
						min = tmp;
						n1 = another;
						n2 = j;
					}
				}			
			}else{
				continue;
			}
		} 
		
		cout<<n1<<' '<<n2<<'\n';
	}
} 
