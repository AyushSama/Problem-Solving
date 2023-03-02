#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n; 
    cin>>n;
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int>small;
    map<char,int>cap;
    for(auto x : s){
        if(x >= 'a' && x <='z')
            small[x]+=1;
        else
            cap[x]+=1;
    }
    int res = 0;
    for(auto x : small){
        int a = small[x.first];
        int b = cap[x.first-32];
        // cout<<x.first<<" "<<(char)(x.first-32)<<endl;
        small[x.first]-=min(a,b);
        cap[x.first-32]-=min(a,b);
        res+= min(a,b);
    }
    // cout<<res<<" ";
    if(k>0)
        for(auto x: small){
            // cout<<x.first<<" ";
            while(x.second>1 && k>0){
                // cout<<x.first<<" ";
                x.second-=2;
                k--;
                res+=1;
            }
        }
    // cout<<res<<" ";
    if(k>0)
        for(auto x: cap){
            while(x.second>1 && k>0){
                x.second-=2;
                k--;
                res+=1;
            }
        }
    cout<<res;
    // cout<<(char)('a'-32);
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