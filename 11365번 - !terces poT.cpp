#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	while(true){
		getline(cin, str, '\n');
		if(str == "END"){ 
			return 0; 
		}else{
			for(int i = str.length()-1 ; i >= 0 ; i--){
				cout<<str[i];
			}
			cout<<"\n";
		}
	}	
}
