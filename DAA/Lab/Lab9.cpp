#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

struct I { double v, w; };

int main() {
	int n;
	double W, ans = 0;
	cout << "Enter items and capacity: ";
	cin >> n >> W;
	vector<I> a(n);
	cout << "Enter value weight for each item: ";
	for (auto &i : a) cin >> i.v >> i.w;

	sort(a.begin(), a.end(), [](I x, I y) {
		return x.v / x.w > y.v / y.w;
	});

	for (auto i : a) {
		if (W <= 0) break;
		double take = min(W, i.w);
		ans += take * i.v / i.w;
		W -= take;
	}

	cout << "Max value = " << fixed << setprecision(2) << ans;
}