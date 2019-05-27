#include<stdio.h>

int main() {
  int arr[28], ok[30] , min = 0, tmp = 0;
  for (int i = 0; i < 30; i++) {
    ok[i] = i + 1;
  }
  for (int i = 0; i < 28; i++) {
    scanf("%d", &arr[i]);
    for (int j = 0; j < 30; j++) {
      if (arr[i] == ok[j]) ok[j] = 0;
    }
  }
 for (int i = 0; i < 30; i++) {
    if (ok[i] != 0 && min < ok[i]) {
      tmp = min;
      min = ok[i];
    }
  }

  printf("%d\n%d", min, tmp);
}
