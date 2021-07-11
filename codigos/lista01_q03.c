#include <stdio.h>
#include <stdlib.h>

int recursivePalindrome(char* str, int size) {
  if ((size == 0) || (size == 1)){
    return 1;
  } else {
    return (str[0] == str[size - 1]) && recursivePalindrome(&str[1], size - 2);
  }
}

int main() {
  char str[] = "thiagogaiht";
  int s = sizeof(str)/sizeof(char);
  printf("palindrome: %d\n", recursivePalindrome(str, s - 1));
  return 0;
}
