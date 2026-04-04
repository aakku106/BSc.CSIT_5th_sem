#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define M 5

void playfair(char a, char b, char k[M][M])
{
    int i, j, r1 = 0, c1 = 0, r2 = 0, c2 = 0, t;
    FILE *f = fopen("cipher.txt", "a+");
    for (i = 0; i < M; i++)
        for (j = 0; j < M; j++)
        {
            if (k[i][j] == a) r1 = i, c1 = j;
            if (k[i][j] == b) r2 = i, c2 = j;
        }
    if (r1 == r2) c1 = (c1 + 1) % M, c2 = (c2 + 1) % M;
    else if (c1 == c2) r1 = (r1 + 1) % M, r2 = (r2 + 1) % M;
    else t = c1, c1 = c2, c2 = t;
    printf("%c%c", k[r1][c1], k[r2][c2]);
    fprintf(f, "%c%c", k[r1][c1], k[r2][c2]);
    fclose(f);
}

int main(void)
{
    int i, n, p = 0, used[26] = {0};
    char key[25], text[25], mat[M][M], alpha[] = "ABCDEFGHIKLMNOPQRSTUVWXYZ";

    printf("\nEnter key:");
    scanf(" %[^\n]", key);
    printf("\nEnter the plain text:");
    scanf(" %[^\n]", text);

    for (n = 0; key[n]; n++)
    {
        if (key[n] == 'j') key[n] = 'i';
        if (key[n] == 'J') key[n] = 'I';
        key[n] = toupper(key[n]);
    }
    n = 0;
    for (i = 0; key[i]; i++)
        if (key[i] != 'J' && !used[key[i] - 'A']) used[key[i] - 'A'] = 1, key[n++] = key[i];
    used['J' - 'A'] = 1;
    for (i = 0; i < 25; i++) if (!used[alpha[i] - 'A']) key[n++] = alpha[i];

    for (i = 0; i < 25; i++)
    {
        mat[i / 5][i % 5] = key[i];
        printf("%c%c", i % 5 ? ' ' : '\n', key[i]);
    }

    for (i = 0; text[i]; i++)
    {
        if (text[i] == 'j') text[i] = 'i';
        if (text[i] == 'J') text[i] = 'I';
        text[i] = toupper(text[i]);
    }

    printf("\n\nEntered text : %s\nCipher Text :", text);
    for (i = 0; text[i]; i++)
        if (!text[i + 1]) playfair(text[i], 'X', mat);
        else if (text[i] == text[i + 1]) playfair(text[i], 'X', mat);
        else playfair(text[i], text[++i], mat);
    return 0;
}