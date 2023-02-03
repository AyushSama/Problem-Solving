#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto i : s){
        mp[i]++;
    }
    if(mp.size()==1 && n>=2){
        cout<<2;
        return;
    }
    int m = 0;
    int y = 0;
    for(auto x : mp){
        if(x.second>1)
            m+= 1;
        else    
            y++;
    }
    cout<<m +(y==0?1:y) + (n - m +(y==0?1:y)) ;
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