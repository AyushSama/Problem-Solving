#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n , m , a , b;
    cin>>n>>m>>a>>b;
    if(a*m < b){
        cout<<n*a;
        return;
    }
    else{
        if(m>=n){
            cout<<min(b,n*a);
            return;
        }
        int temp = min(((n%m)*a),((n%m)*b));
        cout<<((n/m)*b)+temp<<endl;
        // cout<<((n/m)*b)<<((n%m)*a);
        return;
    }
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
        cout<<endl;
    }
    return 0;
}