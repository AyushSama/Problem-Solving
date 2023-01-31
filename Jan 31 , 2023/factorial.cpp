#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

void solve(){
    int n;
    cin>>n;
    cout<<fact(n);
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}