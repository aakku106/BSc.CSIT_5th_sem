1. Find the smallest primitive root of a given prime number.

#include <stdio.h>
#include <stdbool.h>

// Function to calculate (base^exp) % mod efficiently
long long power(long long base, long long exp, long long mod) {
long long res = 1;
base %= mod;
while (exp > 0) {
if (exp % 2 == 1) res = (res _ base) % mod;
base = (base _ base) % mod;
exp /= 2;
}
return res;
}

// Function to find the smallest primitive root of prime p
int findPrimitive(int p) {
if (p <= 1) return -1;

int phi = p - 1;
int factors[100], n_factors = 0;
int temp = phi;

// Find prime factors of phi (p-1)
for (int i = 2; i \* i <= temp; i++) {
if (temp % i == 0) {
factors[n_factors++] = i;
while (temp % i == 0) temp /= i;
}
}
if (temp > 1) factors[n_factors++] = temp;

// Check numbers from 2 to p-1
for (int res = 2; res < p; res++) {
bool ok = true;
for (int i = 0; i < n_factors && ok; i++) {
// If res^(phi/q) == 1 mod p, then res is NOT a primitive root
if (power(res, phi / factors[i], p) == 1) {
ok = false;
}
}
if (ok) return res;
}
return -1;
}

int main() {
int p = 761; // Example prime
int root = findPrimitive(p);
if (root != -1)
printf("The smallest primitive root of %d is %d\n", p, root);
else
printf("No primitive root found.\n");
return 0;
}

Output:  
Smallest primitive root of 761 is 6

2. Implement Modular Multiplicative Inverse using Extended Euclidean Algorithm.

#include <stdio.h>

// Extended Euclidean Algorithm to find gcd(a, b) and coefficients x, y
// such that ax + by = gcd(a, b)
int extendedGCD(int a, int b, int *x, int *y) {
if (a == 0) {
*x = 0;
*y = 1;
return b;
}
int x1, y1;
int gcd = extendedGCD(b % a, a, &x1, &y1);
_x = y1 - (b / a) _ x1;
\*y = x1;
return gcd;
}

// Function to find modular inverse of A under modulo M
int modInverse(int A, int M) {
int x, y;
int g = extendedGCD(A, M, &x, &y);
if (g != 1) {
return -1; // Inverse doesn't exist
} else {
// M is added to handle negative results
return (x % M + M) % M;
}
}

int main() {
int A = 3, M = 11;
int inv = modInverse(A, M);
if (inv == -1)
printf("Inverse doesn't exist\n");
else
printf("Modular multiplicative inverse is %d\n", inv); // Result: 4
return 0;
}

Output:  
Modular multiplicative inverse is 4

3. Compute Euler's Totient function for an input integer n.

#include <iostream>

using namespace std;

// Function to return gcd of a and b

int gcd(int a, int b) {

if (a == 0)

       return b;

return gcd(b % a, a);

}

// A simple method to evaluate Euler Totient Function

int etf(int n) {

int result = 1;

for (int i = 2; i < n; i++)

       if (gcd(i, n) == 1)

           result++;

return result;

}

// Driver Code

int main() {

int n = 11;

cout << etf(n);

return 0;

}

Output
10

4. Determine if two numbers are relatively prime using GCD.

#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int find_gcd(int a, int b) {
if (b == 0)
return a;
return find_gcd(b, a % b);
}

int main() {
int num1, num2;

printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);

// Two numbers are relatively prime if their GCD is 1
if (find_gcd(num1, num2) == 1) {
printf("%d and %d are relatively prime.\n", num1, num2);
} else {
printf("%d and %d are NOT relatively prime.\n", num1, num2);
}

return 0;
}

Output

Enter two numbers: 9 15

9 and 15 are NOT relatively prime.

Output:

Enter two numbers: 5 9

5 and 9 are relatively prime.
