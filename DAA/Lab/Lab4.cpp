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

	for (int i = 0; i < n; i++) {
		int m = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[m]) m = j;
		swap(a[i], a[m]);
	}

	cout << "Sorted: ";
	for (int x : a) cout << x << " ";
}