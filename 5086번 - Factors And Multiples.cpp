#include<iostream>
using namespace std;

int main(){
	while(true){
		int first, second;
		cin>>first>>second;
		
		if(first == 0 && second == 0){
			return 0;
		}else{
			if(second % first == 0){
				cout<<"factor"<<'\n';
			}else if(first % second == 0){
				cout<<"multiple"<<'\n';
			}else{
				cout<<"neither"<<'\n';
			}
		}
	}
	
}
