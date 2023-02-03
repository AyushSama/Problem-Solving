#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int sumOfDigits(int num) {
    if (num < 10)
        return num;
    return num % 9 == 0 ? 9 : num % 9;
}

void solve(){
    int n;
    cin>>n;
    int arr[n]; 
    int q;
    cin>>q;
    for(int i = 0 ; i< n; i++) cin>>arr[i];
    while(q--){
        int a ;
        cin>>a;
        if(a==2){
            int x;
            cin>>x;
            cout<<arr[x-1]<<endl;
        }
        if(a==1){
            int x, y ;
            cin>>x>>y;
            for(int i = x-1; i < y ; i++){
                // string t = to_string(arr[i]);
                // int sum = 0;
                // for(auto x : t){
                //     sum += x-'0';
                // }
                arr[i] = sumOfDigits(arr[i]);
            }
        }
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
        // cout<<endl;
    }
    return 0;
}