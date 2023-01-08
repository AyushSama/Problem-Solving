#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int ones = 0;
    int zero = 0;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        if(arr[i]==0)
            ones++;
        else    
            zero++;
    }
    if(ones==0){
        cout<<(n/2)*(n-n/2);
        return;
    }
    if(zero==0){
        cout<<n-1;
        return;
    }
    if(arr[0]==0)
        arr[0]=1;
        else{
        for(int i = n-1 ; i>=0 ; i--){
            if(arr[i]==1){
                arr[i]=0;
                break;
            }
        }
        }
    int res = 0;
    int count = 0;
    for(int i = n-1 ; i>=0 ; i--){
        if(arr[i]==0)
            count++;
        else{
            res+=count;
        }
    }
    if(arr[0]==0)
        res+=count-1;
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