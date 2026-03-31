#include <algorithm>
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

	make_heap(a.begin(), a.end());
	sort_heap(a.begin(), a.end());

	cout << "Sorted: ";
	for (int x : a) cout << x << " ";
}