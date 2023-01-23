#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int x, y;
    cin>>x>>y;
    if((y-x)%n==0){
        int i = n;
        while(i>0){
            cout<<x<<" ";
            x+= (y-x)/n + ((y-x)/n)/2;
            i--;
        }
        return;
    }
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