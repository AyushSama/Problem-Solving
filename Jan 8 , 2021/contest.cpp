#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n,0));
    int x  = n*n;
    int t = 0;
    bool f = true;

    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n; j++){
            if(f){
                arr[i][j] = t+1;
                f = !f;
            }
            else{
                arr[i][j] = x-t;
                t++;
                f = !f;
            }
        }
    }

    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
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
        // cout<<endl;
    }
    return 0;
}