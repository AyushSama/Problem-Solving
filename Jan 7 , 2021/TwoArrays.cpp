#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define int long long



void solve(){
    int n;
    cin>>n;
    int arr[n];
    int ones = 0;
    int zeros = 0;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i]==0)
            zeros++;
        if(arr[i]==1)   
            ones++;
        sum+=arr[i];
    }
    if(zeros==0){
        cout<<ones;
        return;
    }
    int ans = ones*(1ll<<zeros);
    cout<<ans;
    
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