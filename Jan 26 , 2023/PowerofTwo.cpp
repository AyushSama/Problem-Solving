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
    if(s=="1" || s=="10"){
        cout<<"NO";
        return;
    }
    int one = 0;
    for(auto x : s)
        if(x=='1')
            one++;
    if(one<=3){
        cout<<"YES";
        return;
    }
    cout<<"NO";
    return;
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