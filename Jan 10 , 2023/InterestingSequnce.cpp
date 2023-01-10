#include<bits/stdc++.h>
using namespace std;
#define int long long

int unsetbits(int n)
{
    int count = 0;
    for (int x = 1; x <= n; x = x<<1)
        if ((x & n) == 0)
            count++;    
    return count;
}

int setbits(int n)
{
    int count = 0;
    for (int x = 1; x <= n; x = x<<1)
        if ((x & n) == 1)
            count++;    
 
    return count;
}

void solve(){
    int n , m;
    cin>>n>>m;
    if(m>n){
        cout<<-1;
        return;
    }
    int sum = unsetbits(n) + setbits(n);
    int range = 0;
    for(int i = 0 ; i < n; i++){
        range+= pow(2,i);
    }
    cout<<range<<" ";
    bool f = false;
    int ad = n;
    int i;
    for(i = n+1 ; i <= range; i++){
        if(ad&i==m){
            f= !f;
            break;
        }
        ad = ad & i;
    }

    if(f)
        cout<<i;
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