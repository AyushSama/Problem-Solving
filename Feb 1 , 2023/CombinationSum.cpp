#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

void CombinationSum(int arr[], int n , int target , vector<int>& v , int idx , set<vector<int>>& st){
    if(idx == n){
        if(target==0){
            sort(v.begin(),v.end());
            st.insert(v);
        }
        return;
    }
    int temp = arr[idx];
    if(target>=temp){
        v.push_back(temp);
        CombinationSum(arr,n,target-temp,v,idx+1,st);
        v.pop_back();
        CombinationSum(arr,n,target,v,idx+1,st);
    }
    else{
        CombinationSum(arr,n,target,v,idx+1,st);
    }
}

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++) cin>>arr[i];
    int target;
    cin>>target;
    vector<int>v;
    set<vector<int>>s;
    CombinationSum(arr,n,target,v,0,s);
    for(auto x : s){
        for(auto y : x)
            cout<<y<<" ";
        cout<<endl;
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