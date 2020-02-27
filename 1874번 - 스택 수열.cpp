#include<iostream>
#include<stack>
using namespace std;

int main(){
	
	// �Է�  
	int n;
	cin>>n;
	int arr[200000] = {0}; // 20���� ������ ��¿� ���� �迭�� ���� ������ push 10�� ��, pop 10������ ����߱� ����  
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	
	// �Է� ������ �ݴ�� ���ÿ� �ֱ� ����  
	stack<int> inputStack;
	for(int i = n-1 ; i >= 0 ; i--){
		inputStack.push(arr[i]);
		
		// �ؿ��� arr�� �����ϱ� ���� 
		arr[i] = 0;
	}
	
	stack<int> myStack;
	int inputNum = 1;
	int index = 0;
	while(inputStack.empty() == false){
		if(myStack.empty() == true){
			myStack.push(inputNum);
			inputNum++;
			arr[index] = 1; // + �� ǥ���� ��   
			index++;
		}else if(myStack.top() == inputStack.top()){
			inputStack.pop();
			myStack.pop();
			arr[index] = -1; // - �� ǥ���� ��  
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
	
	// ��� ���� ���� NO�϶��� NO�� ����ؾ��ϱ� ����  
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
