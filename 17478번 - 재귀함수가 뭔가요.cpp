#include<iostream>
#include<string>
using namespace std;

void recursiveFun(int a, int b){
	string str = "____";
	if(a == b){
		for(int i = 0 ; i < a ; i++){
			cout<<str;
		}
		cout<<"\"����Լ��� ������?\""<<'\n';
		for(int i = 0 ; i < a ; i++){
			cout<<str;
		}
		cout<<"\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\""<<'\n';
		for(int i = 0 ; i < a ; i++){
			cout<<str;
		}
		cout<<"��� �亯�Ͽ���."<<'\n';		
		return;
	}else{
		for(int i = 0 ; i < b ; i++){
			cout<<str;
		}
		cout<<"\"����Լ��� ������?\""<<'\n';
		for(int i = 0 ; i < b ; i++){
			cout<<str;
		}
		cout<<"\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���."<<'\n';
		for(int i = 0 ; i < b ; i++){
			cout<<str;
		}
		cout<<"���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���."<<'\n';
		for(int i = 0 ; i < b ; i++){
			cout<<str;
		}
		cout<<"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\""<<'\n'; 
		
		b++;
		recursiveFun(a, b);
		
		for(int i = 0 ; i < b-1 ; i++){
			cout<<str;
		}
		cout<<"��� �亯�Ͽ���."<<'\n';
	}
}

int main(){
	int n;
	cin>>n;
	cout<<"��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������."<<'\n';
	int count = 0;
	recursiveFun(n, 0);
}
