#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int N;
	int people[1000] = {0};
	cin>>N;
	
	// �Է�  
	for(int i = 0 ; i < N ; i++){
		cin>>people[i];
	}
	
	// ������������ ����(�ּڰ��� �� �տ� ���� �ϱ� ����) 
	sort(people, people + N);
	
	int result = 0;
	for(int i = 1 ; i <= N ; i++){
		for(int j = 0 ; j < i ; j++){
			result += people[j];
		}	
	}
	
	cout<<result;
	
} 
