#include<stdio.h>

int main(){
	int n1, n2, num1, num2;
	scanf("%d %d", &n1, &n2);
	num1 = (n1/100) + ((n1%100)/10)*10 + (n1%100%10)*100;
	num2 = (n2/100) + ((n2%100)/10)*10 + (n2%100%10)*100;
	if(num1>num2) printf("%d", num1);
	else printf("%d", num2);
}
