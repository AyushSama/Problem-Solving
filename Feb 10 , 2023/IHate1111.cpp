#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

bool helper(int n, int a){
    if(a>n)
        return false;
    if(a==n){
        return true;
    }
    return helper(n,a+11) or helper(n,a+111);
}

void solve(){
    int n;
    cin>>n;
    if(n>1099){
        cout<<"YES";
        return;
    }
    while(1){
        if(n%11==0){
            cout<<"YES";
            return;
        }
        n-=111;
        if(n<0)
            break;
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