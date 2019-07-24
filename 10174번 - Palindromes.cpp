#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	string line;
	getline(cin, line);
	for(int i = 0 ; i < n ; i++){
		string str;
		getline(cin, str);
		vector<int> arrInt;
		for(int j = 0 ; j < str.length() ; j++){
			if(str.at(j) >= 'A' && str.at(j) <= 'Z'){
				arrInt.push_back(str.at(j) - 65);
			}else{
				arrInt.push_back(str.at(j) - 97);
			}
		}
		bool check = true;
		for(int i = 0 ; i < str.length()/2 ; i++){
			if(arrInt[i] != arrInt[str.length()-1-i]){
				check = false;
				printf("No\n");
				break;
			}
		}
		if(check == true){
			printf("Yes\n");
		}
	}
}
