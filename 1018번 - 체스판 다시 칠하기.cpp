#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){	
	int N,M;
	cin>>N>>M;
	
	// 체스판 입력  
	vector<string> vec;
	for(int i = 0 ; i < N ; i++){
		string tmp;
		cin>>tmp;
		vec.push_back(tmp);
	}
	
	int min = N*M; 
	for(int i = 0 ; i < N - 7 ; i++){
		for(int j = 0 ; j < M - 7 ; j++){
			int count = 0;
			// 8X8 검사 시작  
			for(int h = i ; h < i + 8 ; h++){
				string str = vec[h];
				if(h%2 == 0){
					for(int g = j ; g < j + 8 ; g++){
						if(g%2 == 0){
							// W로 시작하는 경우 
							if(str.at(g) != 'W'){
								count++;
							}
						}else{
							if(str.at(g) != 'B'){
								count++;
							}
						}
					}					
				}else{
					for(int g = j ; g < j + 8 ; g++){
						if(g%2 == 0){
							// W로 시작하는 경우 
							if(str.at(g) != 'B'){
								count++;
							}
						}else{
							if(str.at(g) != 'W'){
								count++;
							}
						}
					}					
				}

			}
			
			if(min > count){
				min = count;
			}
			
			// W로 시작할 때 고쳐야할 수 = 64 - B로 시작할 때 고쳐야할 수  
			if(min > 64-count){
				min = 64-count;
			}
		}
	}
	
	cout<<min;
	 
	
	
}
