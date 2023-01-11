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
    for(int i = 1 ; i<= x*y ; i++){
        if((i+x)%y==0 && (i+y)%x==0)
            cout<<i;
    }
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