#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int chess[8][8] = {0}; // �̰� �ۼ��ϱ�.
	
	// ü���� ���� (��ĭ : 0, ����ĭ : 1) 
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
	
	// �Է°� �迭�� �ֱ�
	int input[8][8] = {0};
	for(int i = 0 ; i < 8 ; i++){
		for(int j = 0 ; j < 8 ; j++){
			char ch;
			cin>>ch;
			input[i][j] = ch;
		}	
	}
	
	// chess �迭�� input �迭 ��
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
