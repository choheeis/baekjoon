#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int chess[8][8] = {0}; // 이거 작성하기.
	
	// 체스판 세팅 (흰칸 : 0, 검정칸 : 1) 
	for(int i = 0 ; i < 8 ; i++){
		if(i%2 == 0){
			for(int j = 1 ; j < 8 ; j++){
				chess[i][j] = 1;
				j++;
			}
		}else{
			for(int j = 0 ; j < 8 ; j++){
				chess[i][j] = 1;
				j++;
			}
		}
	} 
	
	// 입력값 배열에 넣기
	int input[8][8] = {0};
	for(int i = 0 ; i < 8 ; i++){
		for(int j = 0 ; j < 8 ; j++){
			char ch;
			cin>>ch;
			input[i][j] = ch;
		}	
	}
	
	// chess 배열과 input 배열 비교
	int count = 0;
	for(int i = 0 ; i < 8 ; i++){
		for(int j = 0 ; j < 8 ; j++){
			if(chess[i][j] == 0 && input[i][j] == 70){
				count++;
			}
		}
	} 
	printf("%d", count);
} 
