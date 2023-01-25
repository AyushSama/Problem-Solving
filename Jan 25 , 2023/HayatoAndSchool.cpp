#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int o = 0;
    int e = 0;
    // map<int,int>mp;
    vector<int>odd;
    vector<int>even;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        if(arr[i]%2){
            o++;
            odd.push_back(arr[i]);
        }
        else{    
            e++;
            even.push_back(arr[i]);
        }
        // mp[arr[i]]=i+1;
    }
    if(o==0){
        cout<<"NO";
        return;
    }
    if(o>=3){
        int k = 3;
        cout<<"YES"<<endl;
        for(int i = 0 ; i < n && k ; i++){
            if(arr[i]%2){
                cout<<i+1<<" ";
                k--;
            }
        }
        return;
    }
    if(n==3 && e==1){
        cout<<"NO";
        return;
    } 
    cout<<"YES";
    cout<<endl;
    int k=2;
    for(int i = 0 ; i < n && k ; i++){
            if(arr[i]%2==0){
                cout<<i+1<<" ";
                k--;
            }
        }
    k=1;
    for(int i = 0 ; i < n && k ; i++){
            if(arr[i]%2){
                cout<<i+1<<" ";
                k--;
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
        cout<<endl;
    }
    return 0;
}