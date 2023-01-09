#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int req ;
    cin>>req;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    /*for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; */
    int x = n;
    int res = 0;
    for(int i = n-1 ; i >=0 ; i--){
        int count = 1;
        int k = arr[i];
        // cout<<'k'<<" "<<k<<endl;
        while(k<=req){
            k+=arr[i];
            count++;
        }
        // cout<<k<<endl;
        if(count<=x){
            res++;
            x = x-count;
            // cout<<x<<endl;
        }
        if(count>x){
            break;
        }
    }
    cout<<res;
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}