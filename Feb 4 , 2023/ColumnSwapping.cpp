#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ;j  < m ; j++){
            cin>>v[i][j];
        }
    }
    vector<int>bad;
    for(int i = 0 ; i < n && bad.empty(); i++){
        vector<int>t = v[i];
        sort(t.begin(),t.end());
        for(int j = 0 ;j < m ;j++){
            if(v[i][j]!=t[j])
                bad.push_back(j);
        }
    }
    if(bad.size()==0){
        cout<<1<<" "<<1;
        return;
    }
    if(bad.size()>2){
        cout<<-1;
        return;
    }
    for(int i= 0; i < n; i++){
        swap(v[i][bad[0]],v[i][bad[1]]);
    }
    for(int i = 0 ; i < n; i++){
        for(int j = 1 ; j < m ;j++){
            if(v[i][j]<v[i][j-1]){
                cout<<-1;
                return;
            }
        }
    }
    cout<<bad[0]+1<<" "<<bad[1]+1;
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