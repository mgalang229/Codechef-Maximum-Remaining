#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	assert(n >= 2);
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int mx1 = 0;
	for (int i = 0; i < n; i++) {
		mx1 = max(mx1, a[i]);
	}
	int mx2 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != mx1) {
			mx2 = max(mx2, a[i]);
		}
	}
	cout << mx2 % mx1 << '\n';
	return 0;
}
