#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int h;
    cin>>h;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int l = 1, r = 1e18;
    while (l <= r) {
      int m = (l + r) / 2;
      int sum = m;
      for (int i = 0; i < n - 1; ++i) 
        sum += min(m, arr[i + 1] - arr[i]);
      if (sum < h) l = m + 1;
      else r = m - 1;
    }
    cout << r + 1;
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