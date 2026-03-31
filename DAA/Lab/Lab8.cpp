#include <iostream>
#include <vector>
using namespace std;

void qs(vector<int> &a, int l, int r) {
	if (l >= r) return;
	int i = l, j = r, p = a[(l + r) / 2];
	while (i <= j) {
		while (a[i] < p) i++;
		while (a[j] > p) j--;
		if (i <= j) swap(a[i++], a[j--]);
	}
	qs(a, l, j);
	qs(a, i, r);
}

int main() {
	int n;
	cout << "Enter size: ";
	cin >> n;
	vector<int> a(n);
	cout << "Enter array: ";
	for (int &i : a) cin >> i;
	qs(a, 0, n - 1);
	cout << "Sorted: ";
	for (int x : a) cout << x << " ";
}