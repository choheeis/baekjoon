#include<iostream>
#include<vector>
using namespace std;

int main(){
	// N = 순열 수, K = 몇 번째 사람 제거할지  
	int N, K;
	cin>>N>>K;
	
	vector<int> vec;
	vec.push_back(0);
	
	// 0, 1, 2, 3, 4, 5, 6, 7
	for(int i = 1 ; i <= N ; i++){
		vec.push_back(i);	
	}
	
	
	int i = 0; // 인덱스를 가리키는 변수  
	int j = 0; // K를 세는 변수 
	vector<int> checked;
	
	// 1) vec의 크기가 0이 아닐동안 while문을 실행한다.
	while(checked.size() != N){
		
		// 2) while문이 한 번 돌 때마다 인덱스를 가리키는 변수와 K를 세는 변수를 1씩 증가시킨다. 
		j++;
		i++; 
		
		// 3) i가 범위의 배열을 벗어날 경우 i를 초기화 해준다. 
		if(i == N + 1){
			i = 1;
		}
		
		// 4) 이미 뽑힌 원소를 i 가 가리킬 때는 1 증가시킨 j를 무효화해준다. 
		if(vec[i] == -1){
			j--;
			continue;
		}
		
		// 3) K를 세는 변수가 3번째가 되는 경우 i번째 인덱스에 있는 수를 checked에 넣는다. 
		if(K==j){
			checked.push_back(vec[i]);
			vec[i] = -1; // 뽑힘 처리
			j = 0;
		}
		
		
	}
	
	
	cout<<'<';
	for(int i = 0 ; i < checked.size() ; i++){
		if(i == checked.size() - 1){
			cout<<checked[i]<<'>';
		}else{
			cout<<checked[i]<<", ";	
		}
	}
	
	
}
