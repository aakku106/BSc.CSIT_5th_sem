#include <bits/stdc++.h>
using namespace std;

struct N {
	char c;
	int f;
	N *l, *r;
	N(char c, int f, N *l = 0, N *r = 0) : c(c), f(f), l(l), r(r) {}
};

struct C {
	bool operator()(N *a, N *b) { return a->f > b->f; }
};

void dfs(N *x, string s) {
	if (!x) return;
	if (!x->l && !x->r) {
		cout << x->c << " " << (s.size() ? s : "0") << "\n";
		return;
	}
	dfs(x->l, s + "0");
	dfs(x->r, s + "1");
}

int main() {
	int n, f;
	char c;
	cin >> n;
	priority_queue<N *, vector<N *>, C> q;

	while (n--) {
		cin >> c >> f;
		q.push(new N(c, f));
	}

	while (q.size() > 1) {
		N *a = q.top(); q.pop();
		N *b = q.top(); q.pop();
		q.push(new N('#', a->f + b->f, a, b));
	}

	dfs(q.top(), "");
}