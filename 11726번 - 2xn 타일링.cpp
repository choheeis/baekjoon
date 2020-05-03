#include<iostream>
using namespace std;

// 2 X i(배열 인덱스) 크기의 직사각형을 채우는 방법의 수 저장
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
