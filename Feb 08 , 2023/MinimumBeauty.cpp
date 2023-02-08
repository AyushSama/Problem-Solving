#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

void helper(int arr[] , int n , int count , vector<int>& v, int& res , int idx){
    if(count==3 && v.size()==3){
        int mn ;
        int sum = 0;
        for(auto x : v){
            sum+=x;
            mn = min(mn,x);
        }
        sum = sum/3;
        res = min(res,3*abs(sum-mn));
    }
    if(idx==n)
        return;

    for(int i = idx ; i < n;i++){
        v.push_back(arr[i]);
        helper(arr,n,count+1,v,res,idx+1);
        v.pop_back();
        helper(arr,n,count,v,res,idx+1);
    }
}

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i  < n; i++) cin>>arr[i];
    int res = INT_MAX;
    int count = 0;
    vector<int>v;
    helper(arr,n,count,v,res,0);
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