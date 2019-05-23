#include<stdio.h>

int main(){
	int arr[8], up = 50;
	for(int i = 0 ; i < 8 ; i++){
		scanf("%d", &arr[i]);
	}
	for(int i = 0 ; i < 7 ; i++){
		if(arr[i] < arr[i+1]){
			up--;
		}else if(arr[i] > arr[i+1]){
			up++;
		}else{
			up = 100;
		}
	}
	if(up == 43) printf("ascending");
	else if(up == 57) printf("descending");
	else printf("mixed");
}
