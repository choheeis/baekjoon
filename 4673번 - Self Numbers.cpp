#include<iostream>
#include<string>
using namespace std;

 
int main(){
	int num[100001] = {0};
	for(int i = 1 ; i <= 10000; i++){
		int tmp = i;
		string str = to_string(tmp);
		int sum = stoi(str);
		for(int j = 0 ; j < str.size() ; j++){
			int ex = stoi(string(1, str[j]));
			sum += ex;	
		}
		num[sum] = 1;
	}
	for(int i = 1 ; i <= 10000 ; i++){
		if(num[i] == 0){
			cout<<i<<'\n';
		}
	}
}

 
