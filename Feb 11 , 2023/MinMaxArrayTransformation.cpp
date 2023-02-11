#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    vector<int> a , b;
    vector<int> dmin(n),dmax(n);
    for(int i= 0 ; i < n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i= 0 ; i < n; i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    list<int>l;
    int bptr = n-1;
    for(int i = n-1 ; i >= 0 ; i--){
        while(bptr>=0 && b[bptr]>=a[i]){
            l.push_back(b[bptr]);
            bptr--;
        }
        dmin[i] = l.back()-a[i];
        dmax[i] = l.front()-a[i];

        int x = n-i;
        int y = n-(bptr+1);

        if(x==y){
            l.clear();
        }
    }

    for(auto x : dmin)
        cout<<x<<" ";
    cout<<endl;
    for(auto x : dmax)
        cout<<x<<" ";
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