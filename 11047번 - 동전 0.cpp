#include<iostream>
using namespace std;

int main(){
	int N,K;
	int dongjun[10] = {0};
	cin>>N>>K;
	
	int min = 100000001;
	int index = -1;
	for(int i = 0 ; i < N ; i++){
		cin>>dongjun[i];
		
		// �Է��� ���� �� K�� ���� ����� ȭ�� ã��  
		int tmp = K/dongjun[i];
		if(min > tmp && tmp != 0){
			min = tmp;
			index = i;
		}
	}
	
	int result = 0; 
	for(int i = index ; K != 0 ; i--){
		result += K/dongjun[i];
		K = K % dongjun[i];
	}
	cout<<result;

}
