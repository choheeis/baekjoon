#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i = 0 ; i < n ; i++){	
		int arr[26] = {0};
		int arr2[26] = {0};	
		string str1, str2;
		cin>>str1>>str2;
		
		for(int j = 0 ; j < str1.length() ; j++){
			arr[str1.at(j)-97]++;
			
		}
		for(int k = 0 ; k < str2.length() ; k++){
			arr2[str2.at(k)-97]++;
		}
		int count = 0;
		for(int h = 0 ; h < 26 ; h++){
			if(arr[h] == arr2[h]){
				count++; 
			}
		}
		if(count == 26){
			cout<<str1<<" & "<<str2<<" are anagrams.\n";
		}else{
			cout<<str1<<" & "<<str2<<" are NOT anagrams.\n";
		}
	}
	
}
