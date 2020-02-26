#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
	int T;
	cin>>T;
	
	for(int i = 0 ; i < T ; i++){
		stack<char> myStack;
		string str;
		cin>>str;
		
		for(int j = 0 ; j < str.length() ; j++){
			if(str.at(j) == ')'){
				// ')' 가 처음으로 나왔을 때 
				if(myStack.empty() == true){
					// "NO" 출력 위한 강제 push  
					myStack.push('(');
					break;
				}else{
					myStack.pop(); 	
				}
			}else{
				myStack.push(str.at(j));	
			}
		}
	
		if(myStack.empty() == true){
			cout<<"YES"<<'\n';
		}else{
			cout<<"NO"<<'\n';
		}
	}
}
