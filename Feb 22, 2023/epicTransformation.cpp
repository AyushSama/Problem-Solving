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
    priority_queue<int>pq;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(auto x : mp){
        pq.push(x.second);
    }
    while(pq.size()>=2){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        a = a-1;
        b= b-1;
        if(a)
            pq.push(a);
        if(b)
            pq.push(b);
    }
    if(pq.size()==0){
        cout<<0;
        return;
    }
    cout<<pq.top();

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