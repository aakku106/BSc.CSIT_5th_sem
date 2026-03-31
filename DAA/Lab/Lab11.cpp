#include <functional>
#include <iostream>
#include <limits>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int main() {
	int n, m, s, u, v, w;
	cout << "Enter vertices and edges: ";
	cin >> n >> m;
	vector<vector<pair<int, int>>> g(n);
	cout << "Enter u v w for each directed edge: ";
	while (m--) {
		cin >> u >> v >> w;
		g[u].push_back({v, w});
	}
	cout << "Enter source vertex: ";
	cin >> s;

	const long long INF = numeric_limits<long long>::max() / 4;
	vector<long long> d(n, INF);
	priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;
	d[s] = 0;
	q.push({0, s});

	while (!q.empty()) {
		auto [du, x] = q.top();
		q.pop();
		if (du != d[x]) continue;
		for (auto [y, z] : g[x]) {
			if (d[y] > du + z) {
				d[y] = du + z;
				q.push({d[y], y});
			}
		}
	}

	cout << "Shortest distances: ";
	for (auto x : d) cout << (x == INF ? -1 : x) << " ";
}