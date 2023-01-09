#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i = 0 ; i< n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr+1,arr+n);
    if(arr[0]>arr[1])
        cout<<"Alice";
    else    
        cout<<"Bob";

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