#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int req ;
    cin>>req;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    float mx = -1;
    for(int i = 1 ; i< n; i++){
        mx = max(mx,(float)(arr[i]-arr[i-1]));
    }
    // cout<<0-arr[0]<<" "<<req-arr[n-1]<<endl;
    cout<<fixed<<setprecision(9)<<max(mx/2,float(max(abs(0-arr[0]),req-arr[n-1])));     
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