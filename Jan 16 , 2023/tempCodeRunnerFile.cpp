#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    if(n==3 && arr[1]%2!=0){
        cout<<-1;
        return;
    }
    int sum =0;
    for(int i =1 ; i < n-1 ; i++){
        sum+=arr[i];
    }
    if(sum<2*(n-2)){
        cout<<-1;
        return;
    }
    int res = 0;
    for(int i =1 ; i < n-1 ; i++){
        if(arr[i]%2){
            res+= (arr[i]/2)+2;
        }
        else{
            res+=arr[i]/2;
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
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}