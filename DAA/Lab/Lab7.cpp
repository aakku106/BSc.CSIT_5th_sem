#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &i : a) cin >> i;

	make_heap(a.begin(), a.end());
	sort_heap(a.begin(), a.end());

	for (int x : a) cout << x << " ";
}