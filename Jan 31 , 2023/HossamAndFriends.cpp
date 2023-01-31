#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n,m;
    cin>>n>>m;
    if(m==0){
        cout<<n*(n+1)/2;
        return;
    }
    else{
        map<int,int>mp;
        int a ,b;
        while(m--){
            cin>>a>>b;
            mp[a] = b;
            mp[b]= a;
        }
        cout<<mp.size()<<endl;
        int i = 1 ;
        int j = 2;
        int res =0;
        int count = 0 ;
        while(i<=n && j<=n){
            if(mp[i]!=j || mp[j]!=i){
                cout<<i<<" "<<j<<endl;
                i++;
                j++;
                count++;
            }
            else{
                res+= count*(count+1)/2;
                // res-=count+1;
                i = j;
                j++;
            }
        }
        cout<<res;
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
        cout<<endl;
    }
    return 0;
}