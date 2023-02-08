#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    string a , b;
    cin>>a>>b;
    
    bool f = (a[0]==b[0]) ;

    for(int i = 0 ; i <  n; i++){
        if((a[i]==b[i])!=f){
            cout<<"NO";
            cout<<endl;
            return;
        }
    }
    vector<pair<int,int>>v;
    for(int i = 0 ; i < n; i++){
        if(a[i]=='1'){
            v.push_back({i+1,i+1});
            f=!f;
        }
    }

    if(!f){
        v.push_back({1,1});
        v.push_back({2,n});
        v.push_back({1,n});
    }

    cout<<"YES"<<endl<<v.size()<<endl;
    for(auto x : v){
        cout<<x.first<<" "<<x.second<<endl;
    }
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
        // cout<<endl;
    }
    return 0;
}