#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n, k;
	cin >> n >> k;
	vector<pair<int,int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].second;
	}
 
	for (int i = 0; i < n; i++) {
		cin >> v[i].first;
	}
 
	sort(v.begin(), v.end());
	int sum = 0;
	int i = 0;
	while (k > 0) {
		sum += k;
		while (i < n && v[i].second <= sum) {
			i++;
		}
		if (i == n) {
			break;
		}
		k -= v[i].first;
	}
 
	if (i == n) {
		cout << "YES";
	}
	else {
		cout << "NO";
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
        cout<<endl;
    }
    return 0;
}