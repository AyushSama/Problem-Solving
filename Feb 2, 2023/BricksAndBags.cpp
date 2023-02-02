#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++) cin>>arr[i];
    sort(arr,arr+n);
    if(arr[0]==arr[n-1]){
        cout<<0;
        return;
    }
    cout<<2*arr[n-1]-arr[n-2]-arr[0];
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