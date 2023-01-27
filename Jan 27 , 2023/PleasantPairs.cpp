#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int res = 0;
    vector<pair<int,int>>v;
    for(int i = 0 ;i < n ; i++){ 
        cin>>arr[i];
        v.push_back({arr[i],i+1});
    }
    sort(v.begin(),v.end());
    int mx = n+n-1;
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i].first<mx)
            for(int j = i+1; j < v.size() ;j++){
                if(v[i].first * v[j].first > mx)
                    break;
                if(v[i].first*v[j].first==v[i].second+v[j].second)
                    res++;

                // cout<<"here";
            }
        else{
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
    IOS;
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}