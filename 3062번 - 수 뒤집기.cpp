#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
	int T;
	scanf("%d", &T);
	for(int i = 0 ; i < T ; i++){
		string str, str2;
		cin>>str;
		int num = atoi(str.c_str());
		
		// 문자열 뒤집기 
		for(int j = 0 ; j < str.length()  ; j++){
			str2.insert(0,1,str.at(j));
		}
		int reverseNum = atoi(str2.c_str());
		
		int sum = num + reverseNum;
		string result = to_string(sum);
		
		bool check = true;
		for(int h = 0 ; h < result.length()/2 ; h++){
			if(result.at(h) != result.at(result.length()-1-h)){
				printf("NO\n");
				check = false;
				break;
			}
		}
		if(check == true){
			printf("YES\n");
		}
	}
}
