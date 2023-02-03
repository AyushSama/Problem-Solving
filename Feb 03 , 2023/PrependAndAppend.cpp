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
    int i = 0;
    int j = n-1;
    while(i<j){
        if((s[i]=='0' && s[j]=='1') || (s[i]=='1' && s[j]=='0')){
            i++;
            j--;
            continue;
        }
        else    
            break;
        
    }
    cout<<j-i+1;
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