#include<stdio.h>

int main(){
	int input1,input2,input3;
	scanf("%d%d%d", &input1, &input2, &input3); 
	printf("%d\n",(input1+input2)%input3);
	printf("%d\n",(input1%input3 + input2%input3)%input3);
	printf("%d\n", (input1*input2)%input3);
	printf("%d", (input1%input3 * input2%input3)%input3);
}
