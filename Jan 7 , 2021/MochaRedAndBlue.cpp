#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define int long long

void solve(){
    int n ;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0 ; i < n-2; i++){
        string f = s.substr(i,2);
        int j = i+2;
        string temp = s.substr(j,n);
        if(temp.find(f)!=string::npos){
            // cout<<f<<" "<<temp<<endl;
            // cout<<f<<endl;
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
    
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}