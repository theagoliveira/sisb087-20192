#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  int j;
  int k = 0;
  int unique;
  int unique_numbers[19];

  for(i = 0; i < 20; i++) {
    int n = 0;

    while ((n < 10) || (n > 100)) {
      printf("enter n[%.2d]: ", i + 1);
      scanf("%d", &n);
      if ((n < 10) || (n > 100)) {
        printf("invalid number, try again\n");
      }
    }

    unique = 1;
    for(j = 0; j < k; j++) {
      if (n == unique_numbers[j]) {
        unique = 0;
        break;
      }
    }

    if (unique) {
      if (i < 19) {
        unique_numbers[k] = n;
        k++;
      }
      printf("%d is unique\n", n);
    }
  }
}
