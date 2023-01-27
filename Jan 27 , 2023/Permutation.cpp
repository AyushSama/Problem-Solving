#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n][n-1];
    vector<vector<int>>v;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j< n-1 ; j++)
            cin>>arr[i][j];
    map<int,int>mp;
    for(int i = 0 ; i < n ;i++){
        mp[arr[i][0]]++;
    }
    int m;
    for(auto x : mp){
        if(x.second==n-1){
            m = x.first;
            break;
        }
    }
    cout<<m<<" ";
    for(int i = 0 ; i < n ; i++){
        if(arr[i][0]!=m){
            for(int j = 0 ; j < n-1 ;j++){
                cout<<arr[i][j]<<" ";
            }
            return;
        }
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