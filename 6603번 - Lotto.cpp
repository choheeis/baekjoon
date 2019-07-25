#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;

int main(){
	while(true){
		int n;
		scanf("%d", &n);
		if(n==0) return 0;
		else{
			// 수 입력 
			vector<int> arrInt;
			for(int i = 0 ; i < n ; i++){
				int input;
				cin>>input;
				arrInt.push_back(input);
			}
			
			// 수 고르기
			for(int i = 0 ; i < n ; i++){
				for(int j = i+1 ; j < n ; j++){
					for(int h = j+1 ; h < n ; h++){
						for(int k = h+1 ; k < n ; k++){
							for(int g = k+1 ; g < n ; g++){
								for(int d = g+1 ; d < n ; d++){
									cout<<arrInt[i]<<" "<<arrInt[j]<<" "<<arrInt[h]<<" "<<arrInt[k]<<" "<<arrInt[g]<<" "<<arrInt[d]<<"\n";
								}
							}
						}
					}
				}
			} 
			cout<<"\n";
		}
	}
}
