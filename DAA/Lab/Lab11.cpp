#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, s, u, v, w;
	cin >> n >> m;
	vector<vector<pair<int, int>>> g(n);
	while (m--) {
		cin >> u >> v >> w;
		g[u].push_back({v, w});
	}
	cin >> s;

	const long long INF = 1e18;
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

	for (auto x : d) cout << (x == INF ? -1 : x) << " ";
}