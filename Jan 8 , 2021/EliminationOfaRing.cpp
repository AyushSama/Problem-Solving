#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n ;
    cin>>n;
    set<int>s;
    int temp;
    for(int i = 0 ; i < n; i++){
        cin>>temp;
        s.insert(temp);
    }
    if(s.size()<=2){
        cout<<(n/2)+1;
        return;
    }
    cout<<n;
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