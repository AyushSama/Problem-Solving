#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // for(auto x : v)
    //     cout<<x<<" ";
    sort(v.begin(),v.end());
    int res = INT_MAX;
    for(int i = 1 ; i < n-1;i++){
        int minDiff = INT_MAX;
        int median = v[i];
        int l = 0;
        int r = n-1;
        while(l<i && r>i && l<r){
            int sum = v[l]+v[r]+v[i];
            int diff = abs(sum-3*median);
            minDiff = min(minDiff,diff);
            if(minDiff==0)
                break;
            if(sum>3*median)
                r--;
            else    
                l++;
        }
        res = min(res,minDiff);
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