#include <stdio.h>

long long power(long long a, long long b, long long m)
{
    long long r = 1;
    while (b)
    {
        if (b & 1) r = (r * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return r;
}

int main(void)
{
    int n, g, x, y;
    long long a, b;

    printf("Enter the value of n and g: ");
    scanf("%d%d", &n, &g);
    printf("Enter the value of x for the first person: ");
    scanf("%d", &x);
    a = power(g, x, n);
    printf("Enter the value of y for the second person: ");
    scanf("%d", &y);
    b = power(g, y, n);
    printf("key for the first person is: %lld\n", power(b, x, n));
    printf("key for the second person is: %lld\n", power(a, y, n));
    return 0;
}