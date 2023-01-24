#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int a , b ,c ,d;
    cin>>a>>b>>c>>d;
    int alice = a;
    int bob = a;
    int temp;
    int res = a;
    while(b>0 || c>0 || d>0){
        if(bob>0 && b>0){
            temp=min(b,bob);
            alice+=temp;
            bob-=temp;
            res+=temp;
            b-=temp;
        }
        else if(alice>0 && c>0){
            temp = min(c,alice);
            bob+=temp;
            alice-=temp;
            res+=temp;
            c-=temp;
        }
        else if(alice>0 && bob>0 && d>0){
            temp = min(d,(min(alice,bob)));
            alice -= temp;
            bob-=temp;
            res+=temp;
            d-=temp;
        }
        else{
            if(b!=0 || c!=0 || d!=0) res++;
            break;
        }
    }
    cout<<res;
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