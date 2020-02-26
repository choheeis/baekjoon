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
			// ��ȣ ���ڰ� �ƴ� ���  
			if(str.at(i) != '(' && str.at(i) != ')' && str.at(i) != '[' && str.at(i) != ']'){
				continue;
			}
			
			// ���ڿ� �� ù ���ڰ� ) �� ] �� ���
			if(myStack.empty() == true && (str.at(i) == ')' || str.at(i) == ']')){
				//"yes" ��µǵ��� ���� push  
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
 
