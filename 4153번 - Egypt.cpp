#include<iostream>
using namespace std;

int main(){
	while(true){
		int num[3];
		cin>>num[0]>>num[1]>>num[2];
		if(num[0] == 0 || num[1] == 0 || num[2] == 0){
			break;
		}else{
			int max = 0, j = 0;
			for(int i = 0 ; i < 3 ; i++){
				if(max < num[i]){
					max = num[i];
					j = i;
				}
			} 
			int sum = 0;
			for(int i = 0 ; i < 3 ; i++){
				if(j != i){
					sum += num[i]*num[i];
				}
			}
			if(max*max == sum){
				cout<<"right"<<'\n';
			}else{
				cout<<"wrong"<<'\n';
			}
		}
	}
	
}
