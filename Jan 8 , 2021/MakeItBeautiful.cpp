#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    reverse(arr,arr+n);
    if(arr[0]==arr[n-1]){
        cout<<"NO";
        return;
    }
    cout<<"YES"<<endl;
    int j = n-1;
    for(int i = 1 ; i < n ; i++){
        if(arr[i]==arr[i-1]){
            swap(arr[i],arr[j]);
            j--;
        }
    }
    for(int i = 0 ; i < n; i++)
        cout<<arr[i]<<" ";
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