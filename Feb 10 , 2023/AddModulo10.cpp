#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int next(int n){
    return n+n%10;
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    bool flag = false;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] % 5 == 0) {
            flag = true;
            a[i] = next(a[i]);
        }
    }
    if (flag) {
        cout << (*min_element(a.begin(), a.end()) == *max_element(a.begin(), a.end()) ? "Yes": "No") << '\n';
    } else {
        bool flag2 = false, flag12 = false;
        for (int i = 0; i < n; ++i) {
            int x = a[i];
            while (x % 10 != 2) {
                x = next(x);
            }
            if (x % 20 == 2) {
                flag2 = true;
            } else {
                flag12 = true;
            }
        }
        cout << ((flag2 & flag12) ? "No" : "Yes") << '\n';
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