#include <bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename num_t>
using ordered_set = tree<num_t, null_type, less<num_t>, rb_tree_tag, tree_order_statistics_node_update>;


#define rep(i, a, b)         for(int i=a; i<b; i++)
#define Fo(i, k, n)          for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define int                  long long
#define deb(x)               cout << #x << "=" << x << endl
#define deb2(x, y)           cout << #x << "=" << x << ", " << #y << "=" << y << endl
#define pb                   push_back
#define mp                   make_pair
#define fr                    first
#define sc                    second
#define all(x)               x.begin(), x.end()
#define clr(x)               memset(x, 0, sizeof(x))
#define tr(it, a)            for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define INF = 1e18
typedef pair<int, int> pii;
typedef vector<int> vi;
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_pow(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

const int MOD = 1e9 + 7;
const int N = 2e5 + 5;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	map<int, int> occ;
	rep(i, 0, n) {
		cin >> a[i];
		a[i] %= k;
		if (a[i] != 0)
			occ[a[i]]++;
	}
	int ans = 0;
	for (auto i : occ) {
		int c = i.sc;
		int x = k - i.fr;
		ans = max(ans, x + (i.sc - 1) * k);
	}
	cout << (ans == 0 ? 0 : ans + 1) << endl;
}

signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());

	int t = 1;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}