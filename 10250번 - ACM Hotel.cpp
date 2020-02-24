#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i = 0 ; i < n ; i++){
		int H = 0, W = 0, N = 0;
		cin>>H>>W>>N;
		string result = "";
		
		// 층수 결정  
		if(N%H == 0){
			result += to_string(H);
		}else{
			result += to_string(N%H);
		}
		
		// 호수 결정  
		if(N%H == 0){
			if(N/H < 10){
				result += '0';
			}
			result += to_string(N/H);
		}else{
			if(N/H + 1 < 10){
				result += '0';
			}
			result += to_string(N/H+1);
		}
		cout<<result<<endl;
	}
}
