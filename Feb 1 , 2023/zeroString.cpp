#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one = 0;
    int zero = 0;
    for(auto x : s){
        if(x=='0')
            zero++;
        else
            one++;
    }
    if(zero==one){
        cout<<n-one;
        return;
    }
    if(zero>one){
        cout<<n-zero;
        return;
    }
    cout<<n+1-one;
}

int32_t main(){

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    IOS;
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}