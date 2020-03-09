#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int N;
	int people[1000] = {0};
	cin>>N;
	
	// 입력  
	for(int i = 0 ; i < N ; i++){
		cin>>people[i];
	}
	
	// 오름차순으로 정렬(최솟값이 맨 앞에 오게 하기 위함) 
	sort(people, people + N);
	
	int result = 0;
	for(int i = 1 ; i <= N ; i++){
		for(int j = 0 ; j < i ; j++){
			result += people[j];
		}	
	}
	
	cout<<result;
	
} 
