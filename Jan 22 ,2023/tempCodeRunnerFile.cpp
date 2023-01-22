#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0  ;i < n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    if(arr[0]==arr[n-1]){
        cout<<"YES";
        return;
    }
    if(arr[0]==0){
        cout<<"NO";
        return;
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