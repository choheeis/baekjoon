#include<stdio.h>
 
int main(){
   int hour, minute, minus_45;
   scanf("%d %d", &hour, &minute);
   if(hour == 0 && minute < 45){
      printf("%d %d", 23 , 60 - (45 - minute));   
   }else{
      minus_45 = hour*60 + minute - 45;
      printf("%d %d", minus_45/60, minus_45%60);   
   }  
}
