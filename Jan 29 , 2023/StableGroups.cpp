#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int x;
    cin>>x;
    int arr[n];
    for(int i = 0 ; i< n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    vector<int>v;
    for(int i = 0 ; i< n-1; i++){
        if(arr[i+1]-arr[i]>x)
            v.push_back(arr[i+1]-arr[i]);
    }
    int res = v.size()+1;
    if(k==0){
        cout<<res;
        return;
    }
    sort(v.begin(),v.end());
    for(int i = 0 ; i< v.size() && k ; i++){
        k -= (v[i]-1)/x;
        if(k>=0)
            res--;
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
    // cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}