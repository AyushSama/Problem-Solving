#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int>mp;
    set<int>s;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        s.insert(arr[i]);
        mp[arr[i]]++;
    }
    int temp = 0;
    vector<int>v;
    while(temp<n){
        for(auto x : s){
            if(mp[x]>0){
                v.push_back(x);
                mp[x]--;
                temp++;
            }
        }
    }
    int res = n;
    for(int i = 1 ; i < n;i+=2){
        if(v[i]!=v[i-1])
            res-=2;
    }
    cout<<res;
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