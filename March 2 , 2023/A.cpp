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
    int m = 0 , e= 0 , o= 0 , w= 0 , i= 0;
    if(s[i]=='m' || s[i]=='M'){
        while(s[i]=='m' || s[i]=='M' && i<n){
            m = 1;
            i++;
        }
    }
    else{
        cout<<"NO";
        return;
    }
    if(s[i]=='e' || s[i]=='E'){
        while(s[i]=='e' || s[i]=='E' && i<n){
            e = 1;
            i++;
        }
    }
    else{
        cout<<"NO";
        return;
    }
    if(s[i]=='o' || s[i]=='O'){
        while(s[i]=='o' || s[i]=='O' && i<n){
            o = 1;
            i++;
        }
    }
    else{
        cout<<"NO";
        return;
    }
    if(s[i]=='w' || s[i]=='W'){
        while(s[i]=='w' || s[i]=='W' && i<n){
            w = 1;
            i++;
        }
    }
    else{
        cout<<"NO";
        return;
    }
    if(m==1 && e==1 && o==1 && w==1 && i==n){
        cout<<"YES";
        return;
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