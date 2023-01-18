#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for(int i= 0 ; i < n; i++){
        cin>>arr[i];
    }
    if(x<=n/2){
        cout<<"YES";
        return;
    }
    if(n==x && is_sorted(arr,arr+n)){
        cout<<"YES";
        return;
    }
    if(n==x && !is_sorted(arr,arr+n)){
        cout<<"NO";
        return;
    }    
    else{
        int temp[n];
        for(int i = 0; i < n; i++){
            temp[i]= arr[i];
        }
        sort(temp,temp+n);
        for(int i =n-x ; i<x; i++){
            // cout<<arr[i]<<" ";
            if(temp[i]!=arr[i]){
                cout<<"NO";
                return;
            }
        }
        // cout<<endl;
        cout<<"YES";
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