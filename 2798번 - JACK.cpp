#include<stdio.h>
#include<vector>
using namespace std;

vector<bool> select;
vector<int> result;
vector<int> arr;
int Combination(int N, int start, int count);

int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	
	for(int i = 0 ; i < N ; i++){
		int input;
		scanf("%d", &input);
		arr.push_back(input);
		select.push_back(0);
	}
	Combination(N, 0, 0);
	int max = 0;
	for(int i = 0 ; i < result.size() ; i++){
		if(result[i] <= M && max <= result[i]){
			max = result[i];
		}
	}
	printf("%d", max);
	
}

int Combination(int N, int start, int count){
	int sum = 0;
	if(count == 3){
		for(int i = 0 ; i < N ; i++){
			if(select[i] == true){
				sum += arr[i];
			}
		}
		result.push_back(sum);
	}else{
		for(int i = start ; i < N ; i++){
			if(select[i] == true) continue;
			else{
				select[i] = true;
				Combination(N, i, count+1);
				select[i] = false;
			}
		}
	}
}
