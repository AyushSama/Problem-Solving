#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int gcd ;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    gcd = arr[0];
    for(int i = 1 ; i < n; i++){
        gcd = __gcd(gcd,arr[i]);
    }
    if(gcd==0){
        cout<<0;
        return;
    }
    if(__gcd(gcd,n-1)==1){
        cout<<1;
        return;
    }
    if(__gcd(gcd,n-2)==1){
        cout<<2;
        return;
    }
    if(__gcd(gcd,n-3)==1){
        cout<<3;
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