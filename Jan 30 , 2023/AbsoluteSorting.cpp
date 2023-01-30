#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++) cin>>arr[i];
    if(is_sorted(arr,arr+n)){
        cout<<0;
        return;
    }
    if(arr[1]<arr[0]){
        for(int i = 1 ; i< n-1; i++){
            if(arr[i]<arr[i+1]){
                cout<<-1;
                return;
            }
        }
        cout<<arr[0];
        return;
    }
    int inc = 0;
    int mn = arr[0];
    for(int i = 0 ; i < n-1 ; i++){
        if(arr[i+1]<arr[i]){
            inc = i;
            break;
        }
    }
    bool f = true;
    int diff = arr[inc]-arr[0];
    for(int i = inc+1 ; i< n-1 ; i++){
        if(arr[i+1]<arr[i] && arr[i]<=diff){
            continue;
        }
        else{    
            f = false;
            break;
        }
    }
    if(!f){
        cout<<-1;
        return;
    }
    cout<<arr[0];
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