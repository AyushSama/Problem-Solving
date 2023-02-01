#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n ,x ;
    cin>>n>>x;
    int arr[n];
    int odd = 0 ;
    int even = 0;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        if(arr[i]%2)
            odd++;
        else
            even++;
    }
    if(even==0){
        cout<<0;
        return;
    }  
    
    if(x%2==0){
        if(even!=n)
            cout<<even;
        else
            cout<<-1;
    }
    else{
        if(even%2==0){
            cout<<even/2;
        }
        else{
            cout<<(even)/2 +1;
        }
    }
    
    
}

int32_t main(){

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    IOS;
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}