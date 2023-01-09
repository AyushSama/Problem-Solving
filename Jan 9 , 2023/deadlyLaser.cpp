#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n , m , sx , sy , d;
    cin>>n>>m>>sx>>sy>>d;
    if( min(sx - 1, m - sy) <= d and min(n - sx, sy - 1) <= d){
        cout<<-1;
        return;
    }

    cout<<n-1+m-1;
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}