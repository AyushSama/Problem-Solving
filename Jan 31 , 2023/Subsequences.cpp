#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int sub(int i , int n , int arr[] , vector<int>& v , int sum){
    if(i==n){
        if(sum==6){
            return 1;
        }
        return 0;
    }
    
    v.push_back(arr[i]);
    int l = sub(i+1,n,arr,v,sum+arr[i]);
    v.pop_back();
    int r = sub(i+1,n,arr,v,sum);
    return l+r;
}

void solve(){
    int arr[5] = {1 ,2 ,3 , 4 ,5};
    vector<int>v;
    cout<<sub(0,5,arr,v,0);
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}