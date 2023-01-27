#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    string s;
    cin>>s;
    cout<<fixed<<setprecision(30);
    string c = "3141592653589793238462643383279";
    int count = 0;
    for(int i = 0 ; i< s.size() ; i++){
        if(s[i]==c[i])
            count++;
        else    
            break;
    }
    cout<<count;

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