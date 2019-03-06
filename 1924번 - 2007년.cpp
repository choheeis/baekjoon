#include<stdio.h>

int main(){
	int month,day;
	int num=0;
	int sum=31;
	int a=0;
	scanf("%d%d",&month,&day);
		for(int i=1;i<=month;i++){
			if(i==1||i==3||i==5||i==7||i==8||
		i==10||i==12){
			sum=31;
			num=num+sum;
			a=num-31;
		}else if(i==2){
			sum=28;
			num=num+sum;
			a=num-28;
		}else{
			sum=30;
			num=num+sum;
			a=num-30;
		}
	
	}
		
	day=a+day;
	if(day%7==0){
		printf("SUN");
	}else if(day%7==1){
		printf("MON");
	}else if(day%7==2){
		printf("TUE");
	}else if(day%7==3){
		printf("WED");
	}else if(day%7==4){
		printf("THU");
	}else if(day%7==5){
		printf("FRI");
	}else if(day%7==6){
		printf("SAT");
	}
}
