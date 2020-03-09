#include<iostream>
using namespace std;

int main(){
	int price[5] = {0};
	
	for(int i = 0 ; i < 5 ; i++){
		cin>>price[i];
	}
	
	int result = 4000;
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 3 ; j < 5 ; j++){
			int tmp = price[i] + price[j] - 50;
			if(result > tmp){
				result = tmp;
			}
		}
	}
	
	cout<<result;
	
} 
