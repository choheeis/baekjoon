#include<iostream>
using namespace std;

int main(){
	while(true){
		int n1,n2;
		cin>>n1>>n2;
		if(n1 == 0) return 0;
		else{
			int Q = n1/n2, R = n1%n2;
			cout<<Q<<" "<<R<<" / "<<n2<<"\n";
		}
	}
} 
