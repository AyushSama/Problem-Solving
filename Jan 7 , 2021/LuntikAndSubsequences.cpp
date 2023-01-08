#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define int long long

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x = -1;
    for(int i = 0 ; i < n; i++){
        if(s[i]!='?'){
            x = i;
            break;
        }
    }
    int right = x;
    while(x>=0){
        if(s[x]!='?'){
            x--;
            continue;}
        if(s[x+1]=='R'){
            s[x]='B';
        }
        else{
            s[x]='R';}
        x--;
    } 
    while(right<n){
        if(s[right]!='?'){
            right++;
            continue;}
        if(s[right-1]=='R')
            s[right]='B';
        else
            s[right]='R';
        right++;
    }
    cout<<s;
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