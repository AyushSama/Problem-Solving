#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n , x;
    cin>>n>>x;
    if(n%x){
        cout<<-1;
        return;
    }
    cout<<x<<" ";
    for(int i = 2; i < n;i++){
        if(i==x) 
            cout<<n<<" ";
        else
            cout<<i<<" ";
    }
    cout<<1;
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