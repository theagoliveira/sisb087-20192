#include <stdio.h>
#include <stdlib.h>

int recursiveMinimum(int* arr, int size) {
  // DEBUG
  // for(int i = 0; i < size; i++) {
  //   printf("arr[%d] = %d\n", i, arr[i]);
  // }
  // printf("\n");

  if (size == 1) {
    return arr[0];
  } else {
    int aux = recursiveMinimum(&arr[1], size - 1);
    if (arr[0] < aux)
      return arr[0];
    else
      return aux;
  }
}

int main() {
  int a[] = {3, 7, 2, 6, 9, 1, 5, 8, 3, 3, 9, 0, 4, 1, 6};
  int s = sizeof(a)/sizeof(int);
  printf("minimum: %d\n", recursiveMinimum(a, s));
  return 0;
}
