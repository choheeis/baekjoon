#include<iostream>
using namespace std;

void oddLineStart(int a){
	for(int i = 0 ; i < a ; i++){
		if(i%2 == 0){
			// �� ���� ���� ���� �� ¦�� �ε����� ��� 
			cout<<'*';
		}else{
			// �� ���� ���� ���� �� Ȧ�� �ε����� ��� 
			cout<<' ';
		}
	}
}
 
void evenLineStart(int a){
	for(int i = 0 ; i < a ; i++){
		if(i%2 == 0){
			// �� ���� ���� ���� �� ¦�� �ε����� ��� 
			cout<<' ';
		}else{
			// �� ���� ���� ���� �� Ȧ�� �ε����� ��� 
			cout<<'*';
		}
	}
}

int main(){
	int n;
	cin>>n;
	
	for(int i = 0 ; i < n ; i++){
		oddLineStart(n);
		cout<<'\n';
		evenLineStart(n);
		cout<<'\n';
	}
}
