#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int>mp;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    if(is_sorted(arr,arr+n)){
        cout<<0;
        return;
    }
    int mid = (n)/2;
    // cout<<mid<<endl;
    int d = n%2?2:1;
    int count =0;
    for(int i = mid ; i>=1 ; i--){
        if(mp[i]<mp[i+d])
            count++;
        else{
            break;
        }
    }
    cout<<n/2-count;
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