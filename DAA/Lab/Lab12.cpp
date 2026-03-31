#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cout << "Enter number of vertices: ";
	cin >> n;
	vector<vector<long long>> d(n, vector<long long>(n));
	cout << "Enter adjacency matrix (use big number for INF): ";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> d[i][j];

	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

	cout << "All-pairs shortest path matrix:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cout << d[i][j] << " ";
		cout << "\n";
	}
}