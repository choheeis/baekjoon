#include<iostream>
using namespace std;

int count[10000];

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	 
	int N;
	cin>>N;
	for(int i = 0 ; i < N ; i++){
		int tmp = 0;
		cin>>tmp;
		count[tmp-1]++;
	}
	
	for(int i = 0 ; i < 10000 ; i++){
		for(int j = 0 ; j < count[i] ; j++){
			if(count[i] != 0){
				cout<<i+1<<'\n';
			}
		}
	}	
}
