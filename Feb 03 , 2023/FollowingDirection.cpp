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
    int x = 0 ; 
    int y = 0;
    for(auto i : s){
        if(i=='U'){
            y++;
        }
        else if(i=='D'){
            y--;
        }
        else if(i=='L'){
            x--;
        }
        else if(i=='R'){
            x++;
        }
        if(x==1 && y==1){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
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