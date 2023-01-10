#include<bits/stdc++.h>
using namespace std;
#define int long long
int ans = 0;

int get(int n){
    int res = 0;
    while(n%2==0){
        ++res;
        n/=2;
    }
    return res;
}

void solve(){
    int n;
    cin>>n;
    int arr[n];
    int req = n;
    int ans = 0;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        req -= get(arr[i]);
    }
    if(req==0){
        cout<<0;
        return;
    }
    vector<int>a;
    for(int i = 1; i<=n ;i++){
        a.push_back(get(i));
    }
    sort(a.rbegin(),a.rend());
    for(int i = 0 ; i < a.size() && req>0 ; i++){
        if(a[i]){
            ++ans;
            req-=a[i];
        }
    }
    if(req<=0)
        cout<<ans;
    else    
        cout<<-1;
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