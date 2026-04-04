#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j, k, n;
    char s[20], c[20], d[20];

    printf("\n\t\t RAIL FENCE TECHNIQUE");
    printf("\n\nEnter the input string: ");
    scanf(" %19[^\n]", s);

    n = strlen(s);
    for (i = 0, j = 0; i < n; i++) if (i % 2 == 0) c[j++] = s[i];
    for (i = 0; i < n; i++) if (i % 2 == 1) c[j++] = s[i];
    c[j] = '\0';
    printf("\nCipher text after applying rail fence:\n%s", c);

    k = (n + 1) / 2;
    for (i = 0, j = 0; i < k; i++, j += 2) d[j] = c[i];
    for (i = k, j = 1; i < n; i++, j += 2) d[j] = c[i];
    d[n] = '\0';
    printf("\nText after decryption: %s", d);
    return 0;
}
