#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int odd = 0;
    int even =0;
    for(int i = 0  ; i  <n ; i++){
        cin>>arr[i];
    }
    int res = 0;
    int i = 0;
    while(i<n){
        if(arr[i]%2){
            int j = i+1;
            while(arr[j]%2 && j<n){
                odd++;
                j++;
            }
            i = j;
            res+=odd;
            odd=0;
        }
        else{
            int j = i+1;
            while(arr[j]%2==0 && j<n){
                even++;
                j++;
            }
            i=j;
            res+=even;
            even=0;
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