#include<stdio.h>

int main() {
  int n, count = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      printf(" ");
    }
    if (i == 0) printf("*");
    else if(i != n-1){
      printf("*");
      for (int k = 0; k < 2 *( i-1) + 1; k++) {
        printf(" ");
      }
      printf("*");
    }
    else {
      for (int h = 0; h < 2 * i + 1; h++) {
        printf("*");
      }
    }
    count++;
    if (count == n) return 0;
    printf("\n");
  }
}

