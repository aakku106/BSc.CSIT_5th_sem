#include <stdio.h>
#include <string.h>

int main(void)
{
    int a[3][3] = {{6,24,1},{13,16,10},{20,17,15}}, b[3][3] = {{8,5,10},{21,8,21},{21,12,8}};
    int i, j, t, p[3], c[3], d[3];
    char msg[20];

    printf("Enter plain text: ");
    scanf("%19s", msg);
    for (i = 0; i < 3; i++)
    {
        p[i] = msg[i] - 65;
        printf("%d\t", p[i]);
    }
    for (i = 0; i < 3; i++)
    {
        for (t = j = 0; j < 3; j++) t += a[i][j] * p[j];
        c[i] = t % 26;
    }
    printf("\nEncrypted Cipher Text:");
    for (i = 0; i < 3; i++) printf("%c", c[i] + 65);
    for (i = 0; i < 3; i++)
    {
        for (t = j = 0; j < 3; j++) t += b[i][j] * c[j];
        d[i] = t % 26;
    }
    printf("\nDecrypted Cipher Text:");
    for (i = 0; i < 3; i++) printf("%c", d[i] + 65);
    return 0;
}