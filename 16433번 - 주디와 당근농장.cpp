#include<iostream>
#include<string>
using namespace std;

int N, R, C;
char arr[99][99];
int count;
bool isEven = false;

int main(){
	cin>>N>>R>>C;
	
	arr[C-1][R-1] = 'v';
	if((R-1) % 2 == 0){
		isEven = true;
	}else{
		isEven = false;
	}
	
	count = 0;
	for(int i = C-2 ; i >= 0 ; i--){
		count++;
		if(count % 2 == 0){
			arr[i][R-1] = 'v';
		}else{
			arr[i][R-1] = '.';
		}
	}
	
	count = 0;
	for(int i = C ; i < N ; i++){
		count++;
		if(count % 2 == 0){
			arr[i][R-1] = 'v';
		}else{
			arr[i][R-1] = '.';
		}
	}
	
	string str, reverseStr;
	for(int i = 0 ; i < N ; i++){
		str += arr[i][R-1];
	}
	for(int i = 0 ; i < N ; i++){
		if(str.at(i) == 'v'){
			reverseStr += '.';
		}else{
			reverseStr += 'v';
		}
	}
	
	if(isEven == true){
		// 娄荐 青老 版快 
		for(int i = 0 ; i < N ; i++){
			if(i%2 == 0){
				cout<<str<<'\n';
			}else{
				cout<<reverseStr<<'\n';			
			}		
		} 
	}else{
		// 圈荐 青老 版快 
		for(int i = 0 ; i < N ; i++){
			if(i%2 == 0){
				cout<<reverseStr<<'\n';
			}else{
				cout<<str<<'\n';			
			}		
		}
	}
		
} 
