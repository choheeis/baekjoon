#include<iostream>
using namespace std;

int results[1001];

int dp(int a){
	if(a == 1){
		return 1;
	}else if(a == 2){
		return 3;
	}else if(results[a] != 0){
		return results[a];
	}else{
		return results[a] = (dp(a-1) + dp(a-2)*2) % 10007;	
	}
}

int main(){
	int n;
	cin>>n;
	cout<<dp(n);	
}
