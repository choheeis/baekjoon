#include<iostream>
#include<string>
using namespace std;

int main(){
	int N;
	cin>>N;

	for(int i = 0 ; i < N ;i++){
		string str;
		cin>>str;
		
		char last_char = str.at(str.length() - 1);
		string last_string(1, last_char);
		if(stoi(last_string) % 2 == 0){
			//礎熱橾唳辦
			cout<<"even"<<'\n'; 
		}else{
			//�汝鶺炾瞈� 
			cout<<"odd"<<'\n'; 
		}
	}
	
}
