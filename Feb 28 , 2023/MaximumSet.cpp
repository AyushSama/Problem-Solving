#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int l , r;
    cin>>l>>r;
    int count = 0;
    int temp = l;
    while(temp<=r){
        temp = temp*2;
        count++;
    }
    cout<<count<<" ";
    int res = 0;
    for(int i = l ; i<= r; i++){
        int x = 0;
        temp = i;
        while(temp<=r){
            temp = temp*2;
            x++;
        }
        if(count>x){
            break;
        }
        else{
            res+=1;
            res = res%998244353;
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