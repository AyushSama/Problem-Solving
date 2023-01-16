#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n , m;
    cin>>n>>m;
    int res = 0;
    for(int i = 0 ; i< n ; i++){
        string s;
        cin>>s;
        int sum = 0;
        for(int i = 0 ; i< m ; i++){
            if(s[i]=='1')
                sum++;
        }
        if(sum==0)
            res++;
        else
            res+= sum==m?sum-1:sum;
    }
    cout<<res;
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