#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void calculateFactors(int n , map<int,int>& mp){
    vector<int>v;
    int req = n;
    for(int i = 2 ; i*i <= n; i++){
        if(req%i==0){
            int c = 0;
            while(req%i==0){
                c++;
                req = req/i;
            }
            mp[i] = c;
        }
    }
    if(req!=1){
        mp[req] = 1;
    }
}

void solve(){
    int n;
    cin>>n;
    int mx = INT_MIN;
    map<int,int>mp;
    calculateFactors(n , mp);
    int maxx = 0 ;
    for(auto x : mp)
        maxx = max(maxx,x.second);

    int res = 0;    
    for(int i = 0 ; i< maxx ; i++){
        int temp = 1;
        for(auto x : mp){   
            if(x.second>0){
                mp[x.first]--;
                temp*= x.first;
            }
        }
        res+=temp;
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