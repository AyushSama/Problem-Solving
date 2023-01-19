#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n; 
    cin>>n;
    int arr[n+2];
    int sum = 0;
    for(int i = 0 ; i < n+2 ; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n+2);
    for(int i = 0 ; i< n; i++){
        sum+=arr[i];
    }
    if(sum==arr[n] || sum==arr[n+1]){
        for(int i = 0 ; i< n; i++){
            cout<<arr[i]<<" ";
        }
        return;
    }
    // cout<<arr[n+1]<<" "<<arr[n]<<" "<<sum<<endl;
    int x = sum+arr[n]-arr[n+1];
    // cout<<x<<endl;
    int pos;
    bool f = false;
    for(int i = 0 ; i< n;i++ ){
        if(arr[i]==x){
            f = !f;
            pos = i;
            break;
        }
    }
    if(f){
        for(int i = 0 ; i < n+1; i++){
            if(i==pos)
                continue;
            cout<<arr[i]<<" ";
        }
        return;
    }
    cout<<-1;
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