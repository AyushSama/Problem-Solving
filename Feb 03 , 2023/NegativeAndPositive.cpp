#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    vector<int>v;
    int neg = 0;
    int sum = 0;
    for(int i = 0 ; i< n; i++){
        cin>>arr[i];
        v.push_back(abs(arr[i]));
        sum+=abs(arr[i]);
        if(arr[i]<0)
            neg++;
    }
    sort(v.begin(),v.end());
    if(neg%2){
        sum-= 2*v[0];
        cout<<sum;
        return;
    }
    cout<<sum;
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