#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n ;
    cin>>n;
    int p ;
    cin>>p;
    int total = pow(2,n)-1;
    int count = 0;
    int sum = 0;
    for(int i = 0 ; i < n; i++){
        if(p>=pow(2,i)){
            count++;
            sum+= pow(2,i);
        }
    }
    total = total - sum;
    int res = total/p;
    if(total%p) res++;
    cout<<res+count;
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