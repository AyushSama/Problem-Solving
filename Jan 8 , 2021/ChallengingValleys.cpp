#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    bool f = false;
    for(int i= 0 ; i < n; i++){
        cin>>arr[i];
    }
    int d = min(arr[0],arr[n-1]);
    for(int i= 0 ; i  < n ; i++){
        arr[i] =  arr[i] - d;
    }
    int i = 0 ; 
    while(i<n){
        if(arr[i]>0){
            i++;

        }
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
        cout<<endl;
    }
    return 0;
}