#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++) cin>>arr[i];
    priority_queue<pair<int,int>>pq;
    for(int i = 0 ; i < n; i++){
        if(arr[i]>0){
            pq.push({arr[i],i+1});
        }
    }
    vector<pair<int,int>>v;
    while(pq.size()>1){
        auto a = pq.top();
        pq.pop();
        auto b = pq.top();
        pq.pop();
        a.first--;
        b.first--;
        v.push_back({a.second,b.second});
        if(a.first)
            pq.push(a);
        if(b.first)
            pq.push(b);
    }
    cout<<v.size()<<endl;
    for(auto x : v)
        cout<<x.first<<" "<<x.second<<endl;
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
        // cout<<endl;
    }
    return 0;
}