#include<iostream>
using namespace std;

// 2 X i(�迭 �ε���) ũ���� ���簢���� ä��� ����� �� ����
int results[1001]; 

int dp(int a){
	if(a == 1){
		return 1;
	}else if(a == 2){
		return 2;
	}else if(results[a] != 0){
		return results[a];
	}else{
		return results[a] = (dp(a - 2) + dp(a - 1)) % 10007;
	}
} 

int main(){
	int n;
	cin>>n;
		
	cout<<dp(n);		
}
