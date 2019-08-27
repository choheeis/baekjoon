#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int N;
	scanf("%d", &N);
	vector<int> data(N);
	for(int i = 0 ; i < N ; i++){
		scanf("%d", &data[i]);
		if(i > 0){
			data[i] += data[i-1];
		}
	}	
		
	int M;
	scanf("%d", &M);
	for(int h = 0 ; h < M ; h++){
		int i, j;
		scanf("%d %d", &i, &j);
		if(i == 1){
			printf("%d\n", data[j-1]);	
		}else{
			printf("%d\n", data[j-1] - data[i-2]);
		}
	} 
} 
