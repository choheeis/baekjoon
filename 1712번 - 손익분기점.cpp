#include<iostream> 
using namespace std;

int main(){
	//A = �������, B = �������, C = ��Ʈ�� ���� 
	int A, B, C;
	cin>>A>>B>>C;
	
	//	1000 - �������
	//	70 - �������
	//	170 - ������ ��Ʈ�� ����
	//	
	//	1000 + 70*x = 170 * x
	//	1000 = 100x
	//	x = 10
	//	���� x + 1

	if(B >= C){
		cout<<-1;
		return 0;
	}else{
		int result = A / (C - B);
		cout<<result + 1; 	
	}

}
