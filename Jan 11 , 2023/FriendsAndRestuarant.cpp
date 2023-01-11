#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int x[n];
    int y[n];
    for(int i=  0 ; i < n; i++){
        cin>>x[i];
    }
    for(int i=  0 ; i < n; i++){
        cin>>y[i];
    }
    vector<pair<int,int>>v;
    for(int i = 0 ; i< n; i++){
        v.push_back({x[i],y[i]});
    }
    sort(v.begin(),v.end() , [](auto &left , auto &right){
        return left.second<right.second ;
    });
    int first = 0;
    int second = 0;
    int res = 0;
    int k = 0;
    for(auto x : v){
        first += x.first;
        second += x.second;
        k++;
        if(first<=second && k>=2){
            res++;
            first=0;
            second = 0;
            k=0;
        }
    }
    sort(v.begin(),v.end());
    first = 0;
    second = 0;
    int ans = 0;
    k = 0;
    for(auto x : v){
        first += x.first;
        second += x.second;
        k++;
        if(first<=second && k>=2){
            ans++;
            first=0;
            second = 0;
            k=0;
        }
    }
    cout<<max(res,ans);
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