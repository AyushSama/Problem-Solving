#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve(){
    int n;
    cin>>n;
    int sum = n*(n-1);
    for(int i =  1 ; i<=n ; i++){
        sum = ((sum%mod)*i)%mod;
    }
    cout<<sum;

    
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