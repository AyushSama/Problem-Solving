#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		vector<pair<int, int>> res;
		int idx = -1;
		for (int i = 1; i < n; ++i) {
			if (a[i] != a[0]) {
				idx = i;
				res.push_back({1, i + 1});
			}
		}
		if (idx == -1) {
			cout << "NO" << endl;
			continue;
		}
		for (int i = 1; i < n; ++i) {
			if (a[i] == a[0]) {
				res.push_back({idx + 1, i + 1});
			}
		}
		cout << "YES" << endl;
		for (auto x : res) cout << x.first << " " << x.second << endl;
	}
	
	return 0;
}