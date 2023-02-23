#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    map<int,int>mp;
    vector<pair<int,int>>v;
    for(int i = 0 ; i < n; i++) cin>>a[i];
    for(int i = 0 ; i < n; i++) cin>>b[i];
    for(int i = 0 ; i < n; i++){
        mp[a[i]] = i;
        v.push_back({b[i],i});
    }
    sort(v.begin(),v.end());
    int mn = INT_MAX;
    for(int i = v.size()-1 ; i>=0 ; i--){
        mn = min(mn,v[i].second);
        v[i].second = mn;
    }
    int res = INT_MAX;
    int j = 0;
    for(int i = 1 ;i <= 2*n; i+=2){
        int x = mp[i];
        x+= v[j].second;
        res = min(res,x);
        j++;
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