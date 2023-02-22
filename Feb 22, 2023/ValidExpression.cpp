#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    if(x<=(n-2*n) || x>n+1){
        cout<<-1;
        return;
    }
    string res = "";
    if(x<=0){
        int temp = abs(x)+1;
        for(int i = 1 ; i <= n ; i++){
            if(i <= temp){
                res+= '-';
            }
            else
                res+='*';
        }
    }
    else{
        int temp = x-1;
        for(int i = 1 ; i <= n ; i++){
            if(i <= temp){
                res+= '+';
            }
            else
                res+='*';
        }
    }
    cout<<res;
}

int32_t main(){

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    IOS;
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}