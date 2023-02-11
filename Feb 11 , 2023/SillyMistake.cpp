#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];

    int sum = 0;

    for(int i = 0 ;i  < n; i++){ 
        cin>>arr[i];
        sum+=arr[i];
    }

    if(sum!=0){
        cout<<-1;
        return;
    }

    int prefix[n];
    prefix[0] = arr[0];
    for(int i = 1 ;i  < n; i++){
        prefix[i] = prefix[i-1]+arr[i];
    }

    map<int,int>mp;
    int mx= 0 ;
    vector<vector<int>>v;
    vector<int>temp;
    for(int i = 0 ; i < n ; i++){
        if(prefix[i]==0){
            if(mx>2){
                cout<<arr[i]<<" ";
                cout<<mx<<" ";
                cout<<-1;
                return;
            }
            mp.clear();
            v.push_back(temp);
            temp.clear();
        }
        mp[abs(arr[i])]++;
        mx = max(mx,mp[abs(arr[i])]);
        temp.push_back(arr[i]);
    }

    cout<<v.size()<<endl;
    for(auto x : v){
        cout<<x.size()+1;
        cout<<endl;
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
        // cout<<endl;
    }
    return 0;
}