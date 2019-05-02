#include<stdio.h>
int list[5000002];
int sort[5000002];

//정렬하면서 합치는 함수
void merge(int arr[], int left, int middle, int right){
	int sortPivot = left, leftPivot = left, rightPivot = middle + 1;
	
	while(leftPivot <= middle && rightPivot <= right){
		if(arr[leftPivot] < arr[rightPivot]){
			sort[sortPivot] = arr[leftPivot];
			leftPivot++;
		}else{
			sort[sortPivot] = arr[rightPivot];
			rightPivot++;
		}
		sortPivot++;
	}
	
	while(leftPivot <= middle){
		sort[sortPivot] = arr[leftPivot];
		sortPivot++;
		leftPivot++;
	}
	
	while(rightPivot <= right){
		sort[sortPivot] = arr[rightPivot];
		sortPivot++;
		rightPivot++;
	}	
	
	for(int i = left ; i <= right ; i++){
		arr[i] = sort[i];
	}
} 

//분할하는 함수 
void split(int list[], int left, int right){
	if(left < right){
		int middle = (left + right) / 2;
		split(list, left, middle);
		split(list, middle+1, right);
		merge(list, left, middle, right);
	}
}



int main(){
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	
	
	for(int i = 0 ; i < n1 ; i++){
		scanf("%d", &list[i]); 
	}
	
	split(list, 0, n1-1);
	
	printf("%d\n", list[n2-1]);
	
}
