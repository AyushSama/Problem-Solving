#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    string s;
    cin>>s;
    int n = s.size();
    int i = 0;
    while(s[i]=='?')
        i++;
    if(i>=s.size()){
        cout<<n*(n+1)/2;
        return;
    }
    while(i>0){
        if(s[i]=='0')
            s[i-1]='1';
        else    
            s[i-1]='0';
        i--;
    }
    string t = s;
    for(int i = 1 ;i < s.size() ; i++){
        if(s[i]=='?' && s[i-1]=='0')
            s[i]='1';
        else if(s[i]=='?' && s[i-1]=='1')
            s[i]='0';
    }
    int res = 0;
    int count = 1 ;
    for(int i = 1; i < n ;i++){
        if(s[i]!=s[i-1])
            count++;
        else{
            res+= count*(count+1)/2;
            count = 1;
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