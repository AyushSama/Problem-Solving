#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n; 
    cin>>n;
    int arr[n];
    map<int,int>mp;
    int maxx = -1;
    for(int i = 0  ; i < n ; i++){
        cin>>arr[i];
        mp[arr[i]]+=1;
        maxx = max(maxx,mp[arr[i]]);
    }
    cout<<(n-maxx)+(mp.size()-1);
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