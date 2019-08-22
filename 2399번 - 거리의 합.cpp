#include<stdio.h>
#include<vector>
using namespace std;

vector<int> vec;
vector<bool> select;
vector<int> arr;
long long sum = 0;
void Permutation(int n, int r, int count);
int main(){
	int n;
	scanf("%d", &n);
	
	for(int i = 0 ; i < n ; i++){
		int input;
		scanf("%d", &input);
		arr.push_back(input);
		select.push_back(0);
	}
	
	if(n == 2){
		if(arr[0] - arr[1] < 0){
			printf("%d", (arr[0] - arr[1])*-1);	
		}else{
			printf("%d", (arr[0] - arr[1]));	
		}
	}else{
		Permutation(n, 2, 0);	
		printf("%lld", sum);
	}
	

	
}

// ¼ø¿­  
void Permutation(int n, int r, int count){
	
	int pick[2] = {0};
	if(count == r){
		for(int i = 0 ; i < vec.size() ; i++){
			if(i == 0){		
				pick[0] = vec[i];
			}else{
				pick[1] = vec[i];
			}
		}
		if((pick[0] - pick[1]) < 0){
			sum += ((pick[0] - pick[1])*-1);	
		}else{
			sum += ((pick[0] - pick[1]));	
		} 
		
	}else{
		for(int i = 0 ; i < n ; i++){
			if(select[i] == true) continue;
			else{
				select[i] = true;
				vec.push_back(arr[i]);
				Permutation(n, r, count+1);
				vec.pop_back();
				select[i] = false;
			}
		}
	}
}
