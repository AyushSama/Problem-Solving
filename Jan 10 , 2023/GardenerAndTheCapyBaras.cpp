#include<bits/stdc++.h>
using namespace std;
#define int long long



void solve(){
    string s;
    cin>>s;
    int n = s.size();
    if(s[0]==s[n-1]){
        cout<<s.substr(0,1)<<" "<<s.substr(1,n-2)<<" "<<s.substr(n-1,n)<<" ";
        return;
    }
    else if(s[0]!=s[n-1]){
        for(int i = 1 ; i < n-1 ; i++){
            if(s[i]=='a'){
                cout<<s.substr(0, i)<<" "<<s.substr(i,1)<<" "<<s.substr(i+1,n-i-1);
                return;
            }
            else {
                cout<<s.substr(0, 1)<<" "<<s.substr(i,n-i-1)<<" "<<s.substr(n-1,1);
                return;
            }
        }
    }
    cout<<":(";
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