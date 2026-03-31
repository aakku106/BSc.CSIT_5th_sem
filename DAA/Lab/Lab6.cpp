#include <iostream>
#include <vector>
using namespace std;

void ms(vector<int> &a, int l, int r) {
	if (l >= r) return;
	int m = (l + r) / 2;
	ms(a, l, m);
	ms(a, m + 1, r);

	vector<int> t;
	int i = l, j = m + 1;
	while (i <= m && j <= r) t.push_back(a[i] < a[j] ? a[i++] : a[j++]);
	while (i <= m) t.push_back(a[i++]);
	while (j <= r) t.push_back(a[j++]);
	for (int k = 0; k < (int)t.size(); k++) a[l + k] = t[k];
}

int main() {
	int n;
	cout << "Enter size: ";
	cin >> n;
	vector<int> a(n);
	cout << "Enter array: ";
	for (int &i : a) cin >> i;
	ms(a, 0, n - 1);
	cout << "Sorted: ";
	for (int x : a) cout << x << " ";
}