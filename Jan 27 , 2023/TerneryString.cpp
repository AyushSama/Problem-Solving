#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    string s;
    cin>>s;
    set<char>st;
    for(auto x : s)
        st.insert(x);
    if(st.size()<3){
        cout<<"0";
        // cout<<endl;
        return;
    }
    if(s.find("123")!=string::npos || s.find("132")!=string::npos || s.find("213")!=string::npos || s.find("231")!=string::npos || s.find("321")!=string::npos || s.find("312")!=string::npos ){
        cout<<3;
        // cout<<endl;
        return;
    }
    vector<pair<char,int>>v;
    int count = 0;
    int ch = s[0];
    for(int i = 0 ; i < s.size(); i++){
        if(ch!=s[i]){
            // cout<<ch-'0'<<" "<<count<<endl;
            v.push_back({ch,count});
            ch = s[i];
            count = 1;
        }
        else if(ch==s[i])
            count++;
    }
    v.push_back({ch,count});
    // cout<<ch-'0'<<" "<<count<<endl;
    int res = s.size()+1;
    for(int i = 1; i< v.size()-1 ; i++){
        if(v[i].first != v[i-1].first && v[i].first!=v[i+1].first && v[i-1].first!=v[i+1].first){
            res = min(res,v[i].second+2);
        }
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