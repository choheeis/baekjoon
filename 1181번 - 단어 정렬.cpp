#include<stdio.h>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

int main(){
	int N;
	scanf("%d", &N);
	vector<string> arr(N);
	vector<int> len_check(N);
	for(int i = 0 ; i < N ; i++){
		cin>>arr[i];
	}	
	
	for(int i = 0 ; i < N ; i++){
		int min = 55, index = 0;
		for(int j = i ; j < N ; j++){
			if(min > arr[j].length()){
				min = arr[j].length();
				index = j;
			}
		}
		string tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;
		len_check[i] = arr[i].length();
	}
	
	int first = 0, last = 0;
	for(int i = 0 ; i < arr.size() ; i++){
		if(len_check[i] == len_check[i+1]){
			last = i+1;
		}else{
			for(int j = first ; j < last + 1 ; j++){
				string strMin = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
				int index = 0;
				for(int h = j ; h <= last ; h++){
					if(strMin > arr[h]){
						strMin = arr[h];
						index = h;
					}
				}
				string tmp = arr[j];
				arr[j] = arr[index];
				arr[index] = tmp;
			}
			first = i+1;
		}
	}
	
	for(int i = 0 ; i < N-1 ; i++){
		if(arr[i] == arr[i+1]){
			continue;
		}else{
			cout<<arr[i]<<"\n";		
		}	
	}
	cout<<arr[arr.size()-1];	
}
