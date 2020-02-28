#include<iostream>
using namespace std;

int main(){
	int A,B,V;
	cin>>A>>B>>V;
	
	V = V - A;
	int result = 0;
	if(V%(A-B) != 0){
		result = V/(A-B) + 2;
	}else{
		result = V/(A-B) + 1;
	}
	cout<<result;
}
