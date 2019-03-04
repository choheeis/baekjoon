#include <stdio.h>

int main(void) {
   int input;
   scanf("%d", &input);
   for(int i = 1 ; i <= 9 ; i++){
      printf("%d * %d = %d", input, i, input*i);
      printf("\n");
   }
   return 0;
}
