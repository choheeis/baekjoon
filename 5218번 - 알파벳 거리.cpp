#include<iostream>
#include<string>
using namespace std;

int main(){
	int T;
	cin>>T;
	
	for(int i = 0 ; i < T ; i++){
		string str1, str2;
		cin>>str1>>str2;
		cout<<"Distances:";
		for(int j = 0 ; j < str1.size() ; j++){
			int num1, num2, distance;
			num1 = str1.at(j);
			num2 = str2.at(j);
			if(num2 >= num1){
				distance = num2 - num1;
			}else{
				distance = (num2 + 26) - num1;
			}
			cout<<' '<<distance;
		}
		cout<<'\n';
	}
}
