#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int


void solve(){
    int n;
    cin>>n;
    map<int,vector<int>>mp;
    vector<int>v(n);
    int in;
    for(int i = 0 ; i < n; i++){
        cin>>in;
        v[i]=in;
    }
    for(int i = 0 ; i< n; i++){
        cin>>in;
        mp[v[i]].push_back(in);
    }
    for(auto x : mp){
        sort(mp[x.first].begin(),mp[x.first].end(),greater<int>());
    }
    vector<int>res(n,0);
    for(auto& x : mp){
        int size = mp[x.first].size();
        for(int i = 1; i < size ;i++){
            mp[x.first][i] += mp[x.first][i-1];
        }
        for(int i = 0 ; i < size ; i++){
            int minus = mp[x.first].size()%(i+1);
            res[i] += mp[x.first][size-1-minus];
        }
    }
    for(auto x : res)
        cout<<x<<" ";
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