#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int>mp;
    for(int i=  0 ; i< n; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int index ;
    if(n%2==0){
        index = 0;
    }
    else{
        index = 1;
    }
    for(int i = index ; i < n ; i+=2){
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }
    if(is_sorted(arr,arr+n)){
        cout<<"Yes";
        return;
    }
    cout<<"NO";

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