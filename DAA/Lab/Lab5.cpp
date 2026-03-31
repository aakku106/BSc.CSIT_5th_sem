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

	for (int i = 1; i < n; i++) {
		int key = a[i], j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}

	cout << "Sorted: ";
	for (int x : a) cout << x << " ";
}