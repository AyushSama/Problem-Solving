#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    string s;
    cin>>s;
    int n = s.size();
    cout<<4<<endl;
    cout<<'L'<<" "<<n-1<<endl;
    cout<<"R "<<2*n-3<<endl;
    cout<<"L "<<2*n-2<<endl;
    cout<<"L "<<2;
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}