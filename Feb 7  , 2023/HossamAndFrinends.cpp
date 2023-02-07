#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    int m;
    cin>>n>>m;
    vector<int>v(n+1,0);
    while(m--){
        int x , y;
        cin>>x>>y;
        if(x>y)
            swap(x,y);
        v[y] = max(v[y],x);
    }
    int maxpos = 0;
    int res = 0;
    for(int i = 1 ;i <=n; i++){
        maxpos= max(maxpos,v[i]);
        res += i-maxpos;
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