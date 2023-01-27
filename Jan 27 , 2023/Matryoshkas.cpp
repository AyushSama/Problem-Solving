#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    map<int,int>mp;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    if(mp.size()==1){
        cout<<n;
        return;
    }
    sort(arr,arr+n);
    int count = 0;
    int res = 0;
    for(int i = 0 ; i< n; i++){
        if(arr[i]==arr[i+1]||arr[i]+1==arr[i+1]){
            count = max(count,mp[arr[i]]);
            continue;
        }
        else{
            res+=count;
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