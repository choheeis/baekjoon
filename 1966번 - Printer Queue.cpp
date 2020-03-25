#include<iostream>
#include<queue>
#include<vector>
#include<algorithm> 
using namespace std;

bool compare(int a, int b){
	return a > b;
}

int main(){
	int T;
	cin>>T;
	
	for(int i = 0 ; i < T ; i++){
		int N,M;
		cin>>N>>M;
		
		// 1) 입력값 저장하는 벡터 
		vector<int> vec;
		int realValue;
		for(int j = 0 ; j < N ; j++){
			if(j == M){
				// -1 은 주목해야 하는 문서를 나타낸 것임  
				cin>>realValue;
				vec.push_back(-1);
			}else{
				int tmp;
				cin>>tmp;
				vec.push_back(tmp);	
			}
			
		}
		
		// 2) 큐에 프린트 우선순위 입력하기   
		queue<int> q;
		for(int j = 0 ; j < N ; j++){
			q.push(vec[j]);	
		}
		
		// 3) 우선순위 큐에 우선순위가 큰 것부터 입력하기
		queue<int> priorityQ;
		vec[M] = realValue; // -1 넣어줬으니까 다시 원래 우선순위로 바꿔주고 sort 시켜야 함  
		sort(vec.begin(), vec.end(), compare);
		for(int j = 0 ; j < N ; j++){
			priorityQ.push(vec[j]);
		}

		// 4) 큐에 들어있는 원소를 우선순위 큐의 front랑 비교해서 같지 않으면 뒤로 보내기 
		int count = 0;
		while(1){
			if(q.front() == -1){
				if(realValue == priorityQ.front()){
					count++;
					break;
				}else{
					q.pop();
					q.push(-1);
				}
			}else if(q.front() == priorityQ.front()){
				count++;
				q.pop();
				priorityQ.pop();
			}else{
				int tmp = q.front();
				q.pop();
				q.push(tmp);
			}
		}
		
		cout<<count<<'\n';	
		
	}
} 
