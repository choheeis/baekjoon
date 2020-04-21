#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin>>N;
	queue<int> q;
	
	for(int i = 0 ; i < N ; i++){
		string str;
		cin>>str;
		
		if(str == "push"){
			int tmp;
			cin>>tmp;
			q.push(tmp);
		}
		if(str == "pop"){
			if(q.empty() == true){
				cout<<-1<<'\n';
			}else{
				cout<<q.front()<<'\n';
				q.pop();
			}
		}
		if(str == "size"){
			cout<<q.size()<<'\n';
		}
		if(str == "empty"){
			cout<<q.empty()<<'\n';
		}
		if(str == "front"){
			if(q.empty() == true){
				cout<<-1<<'\n';
			}else{
				cout<<q.front()<<'\n';	
			}
		}
		if(str == "back"){
			if(q.empty() == true){
				cout<<-1<<'\n';
			}else{
				cout<<q.back()<<'\n';	
			}
		}
	}
}
