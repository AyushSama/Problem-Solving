#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n ,s, r;
    cin>>n>>s>>r;
    int last = s-r;
    int x = (r)/(n-1);
    int rem = (r)%(n-1);
    for(int i= 0 ; i < n-rem-1 ; i++) cout<<x<<" ";
    for(int i = 0 ; i < rem ; i++) cout<<x+1<<" ";
    cout<<last;
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