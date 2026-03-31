#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cout << "Enter size: ";
	cin >> n;
	vector<int> a(n);
	cout << "Enter array: ";
	for (int &i : a) cin >> i;

	for (int i = 0; i < n; i++)
		for (int j = 0; j + 1 < n - i; j++)
			if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);

	cout << "Sorted: ";
	for (int x : a) cout << x << " ";
}