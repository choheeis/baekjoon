#include<stdio.h>

int main(){
   int arr[10], arr2[42] = {0};
   for(int i = 0 ; i < 10 ; i++){
      scanf("%d", &arr[i]);
      arr[i] = arr[i]%42;
      arr2[arr[i]]++;
   }
   int count = 0;
   for(int i = 0 ; i < 42 ; i++){
      if(arr2[i] != 0) count++;
   }
   printf("%d", count);
}
