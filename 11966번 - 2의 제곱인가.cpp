#include<stdio.h>

int main() {
  int n;
  int num = 1;
  scanf("%d", &n);
  if (n == 1) {
    printf("%d", 1);
  }
  else {
    for (int i = 1; i < 31; i++) {
      num = 1;
      for (int j = 0; j < i; j++) {
        num *= 2;
      }
      if (n == num) {
        printf("%d", 1);
        return 0;
      }
      else {
        continue;
      }

    }
    printf("%d", 0);
  }

}
