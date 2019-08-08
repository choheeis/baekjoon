#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int N;
	scanf("%d", &N);
	vector<int> vec(N);
	for(int i = 0 ; i < N ; i++){
		int input;
		scanf("%d", &input);
		vec[i] = input;
	}
	int min = 0, max = 0; // 오르막길의 처음과 나중 인덱스  
	int result = 0;
	vector<int> route;
	for(int i = 0 ; i < N-1 ; i++){
		if(vec[i] < vec[i+1]){
			max = i+1;
			result = vec[max] - vec[min];
			route.push_back(result);
		}else {
			min = i+1;
		}
	}

	int maxForResult = 0;
	for(int i = 0 ; i < route.size() ; i++){
		if(maxForResult < route[i]) maxForResult = route[i];
	}
	printf("%d", maxForResult);
} 
