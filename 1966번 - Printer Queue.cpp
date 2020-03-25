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
		
		// 1) �Է°� �����ϴ� ���� 
		vector<int> vec;
		int realValue;
		for(int j = 0 ; j < N ; j++){
			if(j == M){
				// -1 �� �ָ��ؾ� �ϴ� ������ ��Ÿ�� ����  
				cin>>realValue;
				vec.push_back(-1);
			}else{
				int tmp;
				cin>>tmp;
				vec.push_back(tmp);	
			}
			
		}
		
		// 2) ť�� ����Ʈ �켱���� �Է��ϱ�   
		queue<int> q;
		for(int j = 0 ; j < N ; j++){
			q.push(vec[j]);	
		}
		
		// 3) �켱���� ť�� �켱������ ū �ͺ��� �Է��ϱ�
		queue<int> priorityQ;
		vec[M] = realValue; // -1 �־������ϱ� �ٽ� ���� �켱������ �ٲ��ְ� sort ���Ѿ� ��  
		sort(vec.begin(), vec.end(), compare);
		for(int j = 0 ; j < N ; j++){
			priorityQ.push(vec[j]);
		}

		// 4) ť�� ����ִ� ���Ҹ� �켱���� ť�� front�� ���ؼ� ���� ������ �ڷ� ������ 
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
