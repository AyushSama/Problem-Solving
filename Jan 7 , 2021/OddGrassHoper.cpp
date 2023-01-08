#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int mx = -1;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        mx = max(mx, arr[i]);
    }
    int count = 0;
    int high = n-1;
    int temp = arr[n-1];
    for(int i = n-2 ; i>=0 ;i--){
        if(arr[i]>temp && arr[i]<=mx){
            temp = arr[i];
            count++;
        }
    }
    cout<<count;
}

int32_t main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}