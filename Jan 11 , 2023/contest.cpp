#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int x , y ;
    cin>>x>>y;
    if(x==y){
        cout<<x;
        return;
    }
    int n = x*y-x-y;
    if(n==-1){
        cout<<max(x,y)-1;
    }
    else if(n==0){
        cout<<2;
    }
    if(n==0)
        cout<<5;


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