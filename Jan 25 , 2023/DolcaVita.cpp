#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int k ;
    cin>>k;
    int arr[n];
    int mn = INT_MAX;
    for(int i = 0 ; i< n; i++){
        cin>>arr[i];
        mn = min(mn,arr[i]);
    }
    sort(arr,arr+n);
    if(mn>k){
        cout<<0;
        return;
    }
    int prefix[n];
    prefix[0] =arr[0];
    for(int i = 1; i< n;i++){
        prefix[i] = arr[i]+prefix[i-1];
    }
    int count = 0;
    int res = 0;
    for(int i = n-1 ; i>=0 ; i--){
        prefix[i] = prefix[i] + (count)*(i+1);
        while(prefix[i]<=k ){
            prefix[i]+= i+1;
            res+= i+1;
            count++;
        }
        // cout<<prefix[i]<<" "<<res<<" "<<count<<endl;
    }
    cout<<res;
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