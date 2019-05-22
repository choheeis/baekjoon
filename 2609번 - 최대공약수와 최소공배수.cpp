#include<stdio.h>
// 최대공약수 최소공배 
int main() {
   int n1, n2;
   scanf("%d %d", &n1, &n2);
   int min;
   int maxCommon = 1;
   int minCommon = 1;
   if (n1 >= n2) min = n2;
   else min = n1;
   int R1, R2;
   int count = 1;
   while (count == 1) {
      for (int i = 2; ;i++){
         R1 = n1 % i;
         R2 = n2 % i;
         if (R1 == 0 && R2 == 0) {
            n1 = n1 / i;
            n2 = n2 / i;
            if (n1 >= n2) min = n2;
            else min = n1;
            maxCommon *= i;
            minCommon *= i;
            break;
         }
         else {
            if (i >= min) {
               count = 0;
               break;
            }
         }
      }
   }
   maxCommon = maxCommon * n1 * n2;
   printf("%d\n%d", minCommon, maxCommon);
}
