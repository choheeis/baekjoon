#include<iostream>
#include<stack>
using namespace std;

int main(){
	
	// 입력  
	int n;
	cin>>n;
	int arr[200000] = {0}; // 20만인 이유는 출력에 쓰일 배열의 가능 범위가 push 10만 후, pop 10만까지 고려했기 때문  
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	
	// 입력 순서와 반대로 스택에 넣기 위함  
	stack<int> inputStack;
	for(int i = n-1 ; i >= 0 ; i--){
		inputStack.push(arr[i]);
		
		// 밑에서 arr를 재사용하기 위함 
		arr[i] = 0;
	}
	
	stack<int> myStack;
	int inputNum = 1;
	int index = 0;
	while(inputStack.empty() == false){
		if(myStack.empty() == true){
			myStack.push(inputNum);
			inputNum++;
			arr[index] = 1; // + 를 표시한 것   
			index++;
		}else if(myStack.top() == inputStack.top()){
			inputStack.pop();
			myStack.pop();
			arr[index] = -1; // - 를 표시한 것  
			index++;
		}else{
			myStack.push(inputNum);
			inputNum++;
			arr[index] = 1;
			index++;
		}
		
		
		if(inputNum > n + 1){
			cout<<"NO";
			return 0;
		}	
	}
	
	// 출력 따로 뺀건 NO일때는 NO만 출력해야하기 때문  
	for(int i = 0 ; i < index + 1; i++){
		if(arr[i] == 1){
			cout<<"+"<<'\n';
		}else if(arr[i] == -1){
			cout<<"-"<<'\n';
		}else{
			continue;
		}
	}
	
	
}
