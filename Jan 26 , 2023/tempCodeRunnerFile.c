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
    if(s.find('0')!=string::npos){
        cout<<n;
        return;
    }
    int ans = 0;
    if(s[0]='1'){
        int i = 0;
        while(s[i]=='1'){
            i++;
            ans++;
        }
    }
    int mx = 0;
    int first = i;
    i++;
    for( i ; i< n; i++){
        if(s[i]=='0'){
            mx = max(mx,i-first);
            first = i;
        }
    }
    cout<<ans+mx;
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