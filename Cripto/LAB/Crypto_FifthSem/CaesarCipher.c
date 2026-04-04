#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char p[10], c[10];
  int k, i, n;

  printf("\n Enter the plain text:");
  scanf("%9s", p);
  printf("\n Enter the key value:");
  scanf("%d", &k);
  printf("\n\n \t PLAIN TEXT: %s", p);
  printf("\n\n \t ENCRYPTED TEXT: ");

  for (n = strlen(p), i = 0; i < n; i++) {
    c[i] = p[i] + k;
    if (isupper(p[i]) && c[i] > 'Z')
      c[i] -= 26;
    if (islower(p[i]) && c[i] > 'z')
      c[i] -= 26;
    putchar(c[i]);
  }

  printf("\n\n \t AFTER DECRYPTION: ");
  for (i = 0; i < n; i++) {
    p[i] = c[i] - k;
    if (isupper(c[i]) && p[i] < 'A')
      p[i] += 26;
    if (islower(c[i]) && p[i] < 'a')
      p[i] += 26;
    putchar(p[i]);
  }
  return 0;
}
