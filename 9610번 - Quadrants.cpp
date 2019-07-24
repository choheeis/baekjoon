#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int axis = 0, Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0;
	for(int i = 0 ; i < n ; i++){
		int point[2] = {0};
		cin>>point[0]>>point[1];
		if(point[0] == 0 || point[1] == 0){
			axis++;
		}else if(point[0] > 0 && point[1] > 0){
			Q1++;
		}else if(point[0] < 0 && point[1] > 0){
			Q2++;
		}else if(point[0] < 0 && point[1] < 0){
			Q3++;
		}else{
			Q4++;
		}
	}
	printf("Q1: %d\n", Q1);
	printf("Q2: %d\n", Q2);
	printf("Q3: %d\n", Q3);
	printf("Q4: %d\n", Q4);
	printf("AXIS: %d", axis);
}
