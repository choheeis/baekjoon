#include<stdio.h>

int main() {
  int n, count = 0, count2 = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i -1; j++) {
      printf(" ");
      }
    for (int k = 0; k < i +1; k++) {
      count++;
      if (count == i+1) printf("*");
      else printf("* ");  
    }
    count = 0;
    count2++;
    if (count2 == n) return 0;
    printf("\n");
    }
}


