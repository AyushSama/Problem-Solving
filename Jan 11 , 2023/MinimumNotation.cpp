#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    string s;
    cin>>s;
    int n = s.size();
    char val = s[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == '9')
        {
            continue;
        }
        else
        {
            if (s[i] > val)
            {
                s[i] = s[i] + 1;
            }
            else if (s[i] < val)
            {
                val = s[i];
            }
            else
                continue;
        }
    }
    sort(s.begin(),s.end());
    cout << s ;
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