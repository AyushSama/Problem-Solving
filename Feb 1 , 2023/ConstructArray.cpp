#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    if(n%2){
        cout<<-1;
        return;
    }
    int arr[n/2];
    for(int i = 1; i<=n/2 ; i++){
        if(i%2){
            arr[i-1] = i;
        }
        else{
            arr[i-1] = -i;
        }
    }
    for(int i = 0 ; i<(n/2) ; i++ )
        cout<<arr[i]<<" ";
    
    for(int i = (n/2)-1 ; i>=0 ; i--)
        cout<<-1*arr[i]<<" ";
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