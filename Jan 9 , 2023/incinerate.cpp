#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    int pd ;
    cin>>pd;
    int h[n];
    map<int,int>p;
    for(int i = 0 ; i < n; i++){
        cin>>h[i];
    }
    int temp;
    for(int i = 0 ; i < n; i++){
        cin>>temp;
        p[h[i]] = temp;
    }
    sort(h,h+n);
    int dest = 0;
    for(int i = 0 ; i < n; i++){
        if(h[i]-dest>pd){
            dest = dest + (h[i]/pd)*pd;
            pd = pd-(h[i]/pd)*p[h[i]];
        }
        if(pd<=0)
            break;
    }
    if(h[n-1]!=0)
        cout<<"NO";
    else    
        cout<<"YES";

    
         
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