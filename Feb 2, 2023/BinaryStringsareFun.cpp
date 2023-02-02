#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define mod 998244353

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int res = 1;
    int prev = 1;
    for(int i =1 ;i  < n ; i++){
        if(s[i]==s[i-1]){
            res = (res+(2*prev))%mod;
            prev = (2*prev)%mod;
        }
        else{
            res+=1;
            res = res%mod;
            prev = 1;
        }
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