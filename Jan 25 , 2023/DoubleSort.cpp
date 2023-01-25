#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

void solve(){
    int n; cin>>n;
        vector<int> a(n),b(n);
        for(int i=0; i<n;i++) cin>>a[i];
        for(int i=0; i<n;i++) cin>>b[i];
        vector<pair<int, int>> p;
        for(int i=0; i<n; i++){
            for(int j=1; j<n-i; j++){
                if(a[j-1]>=a[j] && b[j-1]>=b[j]){
                    swap(a[j-1],a[j]);
                    swap(b[j-1],b[j]);
                    p.push_back({j-1,j });
                }
            }
        }
        vector<int> c=a,d=b;
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        for(int i=0; i<n; i++){
            if(a[i]!=c[i] || b[i]!=d[i]){
                cout<<-1<<endl;
                return;
            }
        }
        int l = p.size();
        cout<<l<<endl;
        for(int i=0; i<l; i++) cout<<p[i].first+1<<" "<<p[i].second+1<<endl;
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