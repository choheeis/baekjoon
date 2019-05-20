#include<stdio.h>

int main() {
  long long int S;
  scanf("%lld", &S);
  long long int num = 0; 
  for (int i = 0; i < S; i++) {
    num += i;
    if (S - num < i + 1) {
      printf("%d", i);
      return 0;
    }
  }

}
