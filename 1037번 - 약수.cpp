#include<iostream>
#include<vector>
using namespace std;

int main(){
	int N;
	cin>>N;
	vector<int> realNum;
	for(int i = 0 ; i < N ; i++){
		int tmp;
		cin>>tmp;
		realNum.push_back(tmp);
	}
	
	if(N == 1){
		cout<<realNum[0]*realNum[0];
	}else{
		int max = 0, min = 1000001;
		for(int i = 0 ; i < N ; i++){
			if(max < realNum[i]){
				max = realNum[i];
			}
		}
		for(int i = 0 ; i < N ; i++){
			if(min > realNum[i]){
				min = realNum[i];
			}
		}
		cout<<max*min;
	}
}
