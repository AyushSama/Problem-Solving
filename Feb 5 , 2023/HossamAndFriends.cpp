#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    // int res = 0;
    int k ;
    cin>>k;
    map<pair<int,int>,int>mp;
    
    while(k--){
        int a , b;
        cin>>a>>b;
        mp[{a,b}]=-1;
        mp[{b,a}]=-1;
    }
    int res = n;
    set<vector<int>>st;
    for(int i = 1 ; i <= n ; i++){
        int count = 0;
        for(int j = i+1 ;j  <= n ; j++){
            if(mp[{i,j}]==-1){
                continue;
            }
            else if(mp[{i,j}]==0 && mp[{i,j-1}]==0){
                count++;
                // // res+=count;
                // mp[{i,j}]=-1;
                // mp[{j,i}]=-1;
            }
        }
        res+=count;
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