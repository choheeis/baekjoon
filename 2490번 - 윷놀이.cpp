#include<stdio.h>

int main(){
	for(int j = 0 ; j < 3 ; j++){
		int count = 0;
		for(int i = 0 ; i < 4 ; i++){
			int arr[4] = {0};
			scanf("%d", &arr[i]);
			if(arr[i] == 0){
				count++;
			}
		}
		if(count == 1) printf("A\n");
		else if(count == 2) printf("B\n");
		else if(count == 3) printf("C\n");
		else if(count == 4) printf("D\n");
		else printf("E\n");
	}
}
