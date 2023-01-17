#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n , m , a , b;
    cin>>n>>m>>a>>b;
    if (m * a <= b)
        cout << n * a << "\n";
    else 
        cout << (n/m) * b + min((n%m) * a, b) << "\n";
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
        // cout<<endl;
    }
    return 0;
}