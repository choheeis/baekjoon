#include<stdio.h>

int main(){
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d%d%d%d%d%d", &x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	int resultX,resultY;
	
	if(x1 == x2){
		resultX = x3;	
	}else if(x1 == x3){
		resultX = x2;
	}else{
		resultX = x1;
	}
	
	if(y1 == y2){
		resultY = y3;
	}else if(y1 == y3){
		resultY = y2;
	}else{
		resultY = y1;
	}
	
	printf("%d %d", resultX, resultY);
} 
