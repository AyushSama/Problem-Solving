#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++)
        cin>>arr[i];
    multiset<int>st;
    int x = 0;
    for(int i = 0 ; i < n; i++){
        if(arr[i]>0){
            st.insert(arr[i]);
        }
        else{
            if(st.size()==0)
                continue;
            int temp = *st.rbegin();
            st.erase(st.find(temp));
            x+=temp;
        }
    }
    cout<<x;
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