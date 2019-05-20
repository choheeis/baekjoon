#include<stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int isP = 1;
  for (int i = 1; i <= n; i++) {
    isP *= i;
  }
  printf("%d", isP);
}
