#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int N;
	scanf("%d", &N);
	vector<int> A(N);
	vector<int> B(N);
	vector<int> B_check(N); // B 원소 중 큰 수부터 순위를 매겨놓은 vector   
	
	for(int i = 0 ; i < N ; i++){
		scanf("%d", &A[i]);
	}
	for(int i = 0 ; i < N ; i++){
		scanf("%d", &B[i]);
	}		
	
	for(int i = 0 ; i < N ; i++){
		int max = -1, index = 0;
		for(int j = 0 ; j < N ; j++){
			if(B[j] > max){
				max = B[j];
				index = j;
			}
		}
		B_check[index] = i+1;
		B[index] = -1*B[index];
	}
	
	// A 선택정렬
	for(int i = 0 ; i < N ; i++){
		int min = 999, index = 0;
		for(int j = i ; j < N ; j++){
			if(min > A[j]){
				min = A[j];
				index = j;
			}
		}
		int tmp = A[index];
		A[index] = A[i];
		A[i] = tmp;
	}
	
	int sum = 0;
	for(int i = 0 ; i < N ; i++){
		sum += A[B_check[i]-1]*(B[i]*-1);
	}
	printf("%d", sum);
	
	
}
