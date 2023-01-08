#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i = 0 ; i < n;  i++) cin>>a[i];
    for(int i = 0 ; i < n;  i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(int i = 0 ; i < n ; i++){
        if(b[i]-a[i] < 0 || b[i]-a[i]>1){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
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