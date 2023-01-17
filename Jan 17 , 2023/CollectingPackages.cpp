#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    int x , y;
    for(int i = 0 ; i < n; i++){
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    int left = 0 ;
    int right = 0 ;
    string res = "";
    for(auto x : v){
        if(x.first-left < 0 || x.second-right < 0){
            cout<<"NO";
            return;
        }
        int temp = x.first-left;
        while(temp--){
            res+='R';
        }
        temp = x.second-right;
        while(temp--){
            res+='U';
        }
        left = x.first;
        right  = x.second;
    }
    cout<<"YES"<<endl;
    cout<<res;
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