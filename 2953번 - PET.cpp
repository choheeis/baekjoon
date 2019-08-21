#include<stdio.h>

int score[5][4];
int main(){
	int sum[5] = {0};
	for(int i = 0 ; i < 5 ; i++){
		int tmp = 0;
		for(int j = 0 ; j < 4 ; j++){
			scanf("%d", &score[i][j]);
			tmp += score[i][j];
		}
		sum[i] = tmp;
	}
	
	int max = 0, winner = 0;
	for(int i = 0 ; i < 5 ; i++){
		if(max < sum[i]){
			max = sum[i];
			winner = i;
		}
	}
	printf("%d %d", winner+1, max);
	
}
