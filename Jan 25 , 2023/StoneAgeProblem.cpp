#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    int sum = 0;
    int arr[n];
    for(int i = 0 ; i< n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int bal = -1;
    map<int,int>mp;
    while(t--){
        int k;
        cin>>k;
        if(k==1){
            int a , b;
            cin>>a>>b;
            if(bal==-1){
                sum-= arr[a-1];
                sum+=b;
                arr[a-1]=b;
                cout<<sum<<endl;
            }
            else{
                if(mp[a]==0){
                    arr[a-1]=b;
                    sum-=bal;
                    sum+=arr[a-1];
                    cout<<sum<<endl;
                    mp[a]=1;
                }
                else{
                    sum-=arr[a-1];
                    sum+=b;
                    arr[a-1]=b;
                    cout<<sum<<endl;
                }
            }
        }
        else{
            int x;
            cin>>x;
            cout<<n*x<<endl;
            bal = x;
            sum = n*x;
            mp.clear();
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
    // cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}