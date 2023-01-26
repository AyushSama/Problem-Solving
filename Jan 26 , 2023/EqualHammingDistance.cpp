#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define mod 1000000007


void solve(){
    int n;
    string s;
    string t;
    cin>>n;
    cin>>s>>t;
    int power = 0;
    int diff = 0;
    for(int i = 0 ; i < n; i++){
        if(s[i]==t[i])
            power++;
        else    
            diff++;
    }
    int res;
    if(power>0){
        res = 1;
        while(power>0){
            res = (res*2)%mod;
            power--;
        }
    }
    else{
        res=0;
    }
    cout<<(res+diff)%mod;
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