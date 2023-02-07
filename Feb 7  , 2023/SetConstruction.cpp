#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

void solve(){
    int n;
	cin >> n;
	vector<string> mat(n);
	for (auto &x : mat) { cin >> x; }
	
	vector<vector<int>> ans(n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i == j || mat[j][i] == '1') {
				ans[i].push_back(j + 1);
			}
		}
	}
	for (auto x : ans) {
		cout << x.size();
		for (int y : x) {
			cout << " " << y;
		}
		cout << "\n";
	}

}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        // cout<<endl;
    }
    return 0;
}