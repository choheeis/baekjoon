#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string arr[1000];

bool compare(string a, string b){
	if(a.length() < b.length()){
		return 1;
	}else if(a.length() > b.length()){
		return 0;
	}else if(a.length() == b.length()){
		int aSum = 0, bSum = 0;
		for(int i = 0 ; i < a.length() ; i++){
			if(a[i] >= '0' && a[i] <= '9'){
				aSum += a[i] - 48;
			}
		}
		for(int i = 0 ; i < b.length() ; i++){
			if(b[i] >= '0' && b[i] <= '9'){
				bSum += b[i] - 48;
			}
		}
		if(aSum != bSum){
			return aSum < bSum;	
		}else{
			return a < b;
		}
	}
}

int main(){
	int N;	
	cin>>N;
	for(int i = 0 ; i < N ; i++){
		cin>>arr[i];
	}

	sort(arr, arr + N, compare);
	
	for(int i = 0 ; i < N ; i++){
		cout<<arr[i]<<'\n';
	}

} 
