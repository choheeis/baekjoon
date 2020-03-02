#include<iostream>
#include<queue>
using namespace std;

int main(){
	int N;
	cin>>N;
	
	queue<int> myQueue;
	for(int i = 0 ; i < N ; i++){
		myQueue.push(i+1);
	}
	
	while(myQueue.size() != 1){
		myQueue.pop();
		
		int tmp = myQueue.front();
		myQueue.pop();
		myQueue.push(tmp);
	}
	
	cout<<myQueue.front();
} 
