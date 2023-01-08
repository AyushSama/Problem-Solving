#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cout<<n<<endl;
    for(int i = 0 ; i < n; i++){
        int c = 1;
        while(c<=arr[i]){
            c*=2;
        }
        cout<<i+1<<" "<<c-arr[i]<<endl;
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
        // cout<<endl;
    }
    return 0;
}