#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[7];
	for(int i = 0 ; i < 7 ; i++){
		cin>>arr[i];
	}
	sort(arr, arr + 7);
	int sum = 0, min = 100;
	for(int i = 0 ; i < 7 ; i++){
		if(arr[i]%2 != 0){
			sum += arr[i];
			if(min > arr[i]){
				min = arr[i];
			}
		}
	}
	if(sum == 0){
		cout<<-1;
	}else{
		cout<<sum<<'\n'<<min;	
	}
	
}
