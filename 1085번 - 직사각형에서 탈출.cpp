#include<stdio.h>

int main(){
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int dir[4] = {x, y, w-x, h-y};
	int min = 9999;
	for(int i = 0 ; i < 4 ; i++){
		if(min > dir[i]){
			min = dir[i];
		}
	}
	printf("%d", min);
	
}
