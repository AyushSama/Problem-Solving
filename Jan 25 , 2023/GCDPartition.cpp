#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    map<int,int>mp;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int prefix[n];
    int suffix[n];
    suffix[n-1]=arr[n-1];
    prefix[0] = arr[0];
    mp[prefix[0]]=1;
    for(int i = 1 ; i < n; i++){
        prefix[i] = arr[i]+prefix[i-1];
    }
    for(int i = n-2 ; i >=0 ; i--){
        suffix[i] = suffix[i+1]+arr[i];
    }
    // for(int i = 0 ; i < n; i++){
    //     cout<<prefix[i]<<" "<<suffix[i]<<endl;
    // }
    int res =0;
    for(int i = 0 ;  i < n-1; i++){
        res = max(res,__gcd(prefix[i],suffix[i+1]));
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
