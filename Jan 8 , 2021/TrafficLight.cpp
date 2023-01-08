#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n,i;
    char st;
    string s;
    cin >> n >> st;
    cin >> s;
    s += s;
    int ans = 0;
    int lst = -1;
    for (int i = s.size(); i >= 0; i--)
    {
        if(s[i] == 'g'){
            lst = i;
        }
        else if(s[i] == st){
            ans = max(ans,lst - i);
        }
    }
    cout << ans;
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