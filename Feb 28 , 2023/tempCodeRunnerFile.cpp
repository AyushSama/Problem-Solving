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
    if(s.size()==1){
        cout<<"YES";
        return;
    }
    else{
        if(s.find("BB")!=string::npos){
            cout<<"NO";
            return;
        }
        string temp = "";
        for(int i = 1 ; i<=100 ; i++){
            if(i%3==0)
                temp+='F';
            if(i%5==0)
                temp+='B';
        }
        if(temp.find(s)!=string::npos){
            cout<<"YES";
            return;
        }
        cout<<"NO";
    }
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