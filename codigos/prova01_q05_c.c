#include <stdio.h>

int funcao(char *s1, char *s2) {
  while (*s1 != '\0' && *s2 != '\0') {
    if (*s1 != *s2) {
      return 0;
    }
    s1++;
    s2++;
  }
  return 1;
}

int main() {
  char str1[80];
  char str2[80];
  int r;
  printf("Digite duas strings: ");
  scanf("%s%s", str1 , str2);

  r = funcao(str1, str2);
  printf("O resultado é %d\n", r);
  return 0;
}
