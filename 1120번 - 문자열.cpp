#include<iostream>
#include<string>
using namespace std;

int main(){
	string A, B;
	cin>>A>>B;
	
	int compareCount = B.length() - A.length() + 1;
	int min = 51;
	int count = 0;
	
	// A�� ��°�� �� ĭ�� �Űܰ��� B�� ����  
	for(int i = 0 ; i < compareCount ; i++){
		count = 0;
		string tmp = B.substr(i, A.length());
		for(int j = 0 ; j < A.length() ; j++){
			if(A.at(j) != tmp.at(j)){
				count++;
			}
		}
		if(min > count){
			min = count;
		}
	}

	cout<<min;
} 
