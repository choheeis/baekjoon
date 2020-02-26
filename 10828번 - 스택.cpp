#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
	int N;
	cin>>N;
	stack<int> stk;
	
	
	for(int i = 0 ; i < N ; i++){
		string str;
		cin>>str;
		
		// push X를 입력한 경우  
		if(str == "push"){
			int num;
			cin>>num;
			stk.push(num);
		}else if(str == "pop"){
			if(stk.empty() == true){
				cout<<-1<<'\n';
			}else{
				cout<<stk.top()<<'\n';
			stk.pop();	
			}
		}else if(str == "size"){
			cout<<stk.size()<<'\n';
		}else if(str == "empty"){
			if(stk.empty() == true) cout<<1<<'\n';
			else cout<<0<<'\n';
		}else{
			// top 인 경우 
			if(stk.empty() == true){
				cout<<-1<<'\n';
			}else{
				cout<<stk.top()<<'\n'; 	
			}
		}
	}
}
