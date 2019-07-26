#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int change = 1000-n;
	int coin500 = 0, coin100 = 0, coin50 = 0, coin10 = 0, coin5 = 0, coin1 = 0;
	if(change >= 500){
		while(change >= 500){
			coin500++;
			change -= 500;
		}
	}
	if(change >= 100){
		while(change >= 100){
			coin100++;
			change -= 100;
		}
	}
	if(change >= 50){
		while(change >= 50){
			coin50++;
			change -= 50;
		}
	}
	if(change >= 10){
		while(change >= 10){
			coin10++;
			change -= 10;
		}
	}
	if(change >= 5){
		while(change >= 5){
			coin5++;
			change -= 5;
		}
	}
	if(change >= 1){
		while(change > 0){
			coin1++;
			change -= 1;
		}
	}
	printf("%d", coin500+coin100+coin50+coin10+coin5+coin1);
}
