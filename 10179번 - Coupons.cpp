#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	double input;
	scanf("%d", &n);
	double *arr;
	arr = (double *)malloc(sizeof(double) * n);
	for(int i = 0 ; i < n ; i++){
		scanf("%lf", &input);
		arr[i] = input*0.8;
	}
	for(int i = 0 ; i < n ; i++){
		printf("$%.2lf\n", arr[i]);
	}
	free(arr);
	
}
