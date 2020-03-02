#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin>>N;
	queue<int> myQueue;
	
	for(int i = 0 ; i < N ; i++){
		string str;
		cin>>str;
		
		if(str == "push"){
			int num;
			cin>>num;
			myQueue.push(num);
		}else if(str == "pop"){
			if(myQueue.empty() == true){
				cout<<-1<<'\n';
			}else{
				cout<<myQueue.front()<<'\n';
				myQueue.pop();
			}
		}else if(str == "size"){
			cout<<myQueue.size()<<'\n';
		}else if(str == "empty"){
			cout<<myQueue.empty()<<'\n';
		}else if(str == "front"){
			if(myQueue.empty() == true){
				cout<<-1<<'\n';
			}else{
				cout<<myQueue.front()<<'\n';
			}
		}else{
			if(myQueue.empty() == true){
				cout<<-1<<'\n';
			}else{
				cout<<myQueue.back()<<'\n';
			}
		}
	}
}
