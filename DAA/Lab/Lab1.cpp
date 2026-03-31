#include <iostream>
using namespace std;

int main() {
	long long a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	while (b) {
		long long t = a % b;
		a = b;
		b = t;
	}
	cout << "GCD = " << a;
}