#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=  0 ; i<n ; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n==2){
        cout<<arr[0]<<" "<<arr[1];
        return;
    }
    int first , last;
    int mn = INT_MAX;
    for(int i = 0 ; i<n-1 ; i++){
        if(arr[i+1]-arr[i] < mn){
            mn = arr[i+1]-arr[i];
            first = i;
        }
    }
    for(int i= first+1; i< n; i++)
        cout<<arr[i]<<" ";
    for(int i = 0 ; i<=first ; i++)
        cout<<arr[i]<<" ";

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