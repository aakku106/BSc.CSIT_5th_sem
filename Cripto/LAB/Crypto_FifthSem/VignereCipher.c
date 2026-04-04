#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void encipher(void), decipher(void);

int main(void)
{
    int choice;
    while (1)
    {
        printf("\n1. Encrypt Text\t2. Decrypt Text\t3. Exit\n\nEnter Your Choice : ");
        scanf("%d", &choice);
        if (choice == 3) exit(0);
        if (choice == 1) encipher();
        else if (choice == 2) decipher();
        else { printf("Please Enter Valid Option."); exit(0); }
    }
}

void encipher(void)
{
    char p[50], k[10];
    int i, j, n;

    printf("\nEnter Plain Text: ");
    scanf("%49s", p);
    printf("\nEnter Key Value: ");
    scanf("%9s", k);
    n = strlen(k);

    printf("\nResultant Cipher Text: ");
    for (i = 0, j = 0; p[i]; i++, j = (j + 1) % n)
        putchar('A' + ((toupper(p[i]) - 'A') + (toupper(k[j]) - 'A')) % 26);
}

void decipher(void)
{
    char p[50], k[10];
    int i, j, n, v;

    printf("\nEnter Cipher Text: ");
    scanf("%49s", p);
    printf("\nEnter the key value: ");
    scanf("%9s", k);
    n = strlen(k);

    printf("\nResultant Plain Text: ");
    for (i = 0, j = 0; p[i]; i++, j = (j + 1) % n)
    {
        v = (toupper(p[i]) - 'A') - (toupper(k[j]) - 'A');
        if (v < 0) v += 26;
        putchar('A' + v % 26);
    }
}