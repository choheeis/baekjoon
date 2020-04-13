#include<iostream>
using namespace std;

int isFilled[100][100];

int main(){
	int T;
	cin>>T;
	
	for(int i = 0 ; i < T ; i++){
		int left, bottom;
		cin>>left>>bottom;
		
		for(int h = bottom - 1 ; h < bottom + 9 ; h++){
			for(int j = left - 1; j < left + 9 ; j++){
				isFilled[j][h]++;
			}
		}
	}

	int area = 0;
	for(int i = 0 ; i < 100 ; i++){
		for(int j = 0 ; j < 100 ; j++){
			if(isFilled[j][i] != 0){
				area++;
			}
		}
	}
	
	cout<<area;
}
