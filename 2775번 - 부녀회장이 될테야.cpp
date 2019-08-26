#include<stdio.h>

int people[15][14];
int main(){	
	// 0층 초기화 
	for(int i = 0 ; i < 14 ; i++){
		people[0][i] = i+1;
	}
	
	for(int i = 1 ; i < 15 ; i++){
		for(int j = 0 ; j < 14 ; j++){
			int sum = 0;
			for(int h = 0 ; h <= j ; h++){
				sum += people[i-1][h];
			}
			people[i][j] = sum;
		}
	}
	
	//입력
	int T;
	scanf("%d", &T);
	for(int i = 0 ; i < T ; i++){
		int k, n;
		scanf("%d %d", &k, &n);
		printf("%d\n", people[k][n-1]);
	} 
}
