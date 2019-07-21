#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;

int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	vector<int> bucket(N, 0);
	for(int l = 0 ; l < M ; l++){
		int i, j, k;
		cin>>i>>j>>k;
		for(int h = i-1 ; h <= j-1 ; h++){
			bucket[h] = k;
		}
	}
	for(int i = 0 ; i < N ; i++){
		cout<<bucket[i]<<" ";
	}
}
