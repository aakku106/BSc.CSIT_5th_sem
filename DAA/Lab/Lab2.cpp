#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, x, seq = -1, bin = -1;
	cout << "Enter size: ";
	cin >> n;
	vector<int> a(n);
	cout << "Enter sorted array: ";
	for (int &i : a) cin >> i;
	cout << "Enter key: ";
	cin >> x;

	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			seq = i;
			break;
		}
	}

	int l = 0, r = n - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) {
			bin = m;
			break;
		}
		if (a[m] < x) l = m + 1;
		else r = m - 1;
	}

	cout << "Sequential index = " << seq << "\n";
	cout << "Binary index = " << bin;
}