#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
	string str = "ddd";
	
	while(str.length() != 1 && str.at(0) != '.'){
		
		getline(cin, str); 
		if(str.length() == 1 && str.at(0) == '.'){
			return 0;
		}
		
		stack<char> myStack;
		
		for(int i = 0 ; i < str.length() ; i++){
			// 괄호 문자가 아닌 경우  
			if(str.at(i) != '(' && str.at(i) != ')' && str.at(i) != '[' && str.at(i) != ']'){
				continue;
			}
			
			// 문자열 맨 첫 문자가 ) 나 ] 일 경우
			if(myStack.empty() == true && (str.at(i) == ')' || str.at(i) == ']')){
				//"yes" 출력되도록 강제 push  
				myStack.push('y');
				break;
			}else if(str.at(i) == ')' && myStack.top() == '('){
				myStack.pop();
			}else if(str.at(i) == ']' && myStack.top() == '['){
				myStack.pop();
			}else{
				myStack.push(str.at(i));
			}
		}
		
		if(myStack.empty() == true){
			cout<<"yes"<<'\n';
		}else{
			cout<<"no"<<'\n';
		}
	}
}
 
