#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long int p, q, n, t, flag, e[100], d[100], temp[100], m[100], en[100];
char msg[100];

int prime(long int pr){
    int i;
    for (i = 2; i <= sqrt(pr); i++)
        if (pr % i == 0) return 0;
    return 1;
}

long int cd(long int x){
    long int k = 1;
    while ((k += t) % x != 0) ;
    return k / x;
}

void ce(void){
    int k = 0, i;
    for (i = 2; i < t; i++)
        if (t % i && prime(i) && i != p && i != q && (d[k] = cd(i)) > 0)
            e[k++] = i;
    flag = k;
}

void encrypt(void){
    int i, j;
    long int key = e[0];
    for (i = 0; msg[i] != '\0'; i++){
        long int pt = m[i] - 96, k = 1;
        for (j = 0; j < key; j++) k = (k * pt) % n;
        temp[i] = k;
        en[i] = k + 96;
    }
    en[i] = -1;
    printf("\nTHE ENCRYPTED MESSAGE IS\n");
    for (i = 0; en[i] != -1; i++) printf("%c", (char)en[i]);
}

void decrypt(void){
    int i, j;
    long int key = d[0];
    for (i = 0; en[i] != -1; i++){
        long int ct = temp[i], k = 1;
        for (j = 0; j < key; j++) k = (k * ct) % n;
        m[i] = k + 96;
    }
    m[i] = -1;
    printf("\nTHE DECRYPTED MESSAGE IS\n");
    for (i = 0; m[i] != -1; i++) printf("%c", (char)m[i]);
}

int main(void){
    int i;
    printf("\nENTER FIRST PRIME NUMBER\n");
    scanf("%ld", &p);
    if (!prime(p)) { printf("\nWRONG INPUT\n"); return 0; }

    printf("\nENTER ANOTHER PRIME NUMBER\n");
    scanf("%ld", &q);
    if (!prime(q) || p == q) { printf("\nWRONG INPUT\n"); return 0; }

    printf("\nENTER MESSAGE\n");
    scanf("%99s", msg);
    for (i = 0; msg[i] != '\0'; i++) m[i] = msg[i];

    n = p * q;
    t = (p - 1) * (q - 1);
    ce();

    printf("\nPOSSIBLE VALUES OF e AND d ARE\n");
    for (i = 0; i < flag; i++) printf("\n%ld\t%ld", e[i], d[i]);
    encrypt();
    decrypt();
    return 0;
}