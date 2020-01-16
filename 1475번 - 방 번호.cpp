#include<string>
#include<iostream>
using namespace std;

int main(){
	string str;
	cin>>str;
	int arr[10] = {0};
	for(int i = 0 ; i < str.length() ; i++){
		arr[str.at(i) - 47 - 1]++;
	}
	int six = arr[6];
	int nine = arr[9];
	int isSixOrNine = 0;
	int max = 0;
	for(int i = 0 ; i < 10 ; i++){
		if(max < arr[i]){
			max = arr[i];
			if(i == 6 || i == 9){
				isSixOrNine = 1;
			}else{
				isSixOrNine = 0;
			}
		} 
	}	
	int result = 0;
	if(isSixOrNine == 1){
		result = (six + nine)/2 + (six + nine)%2;
	}else{
		result = max;
	}
	cout<<result;
}
