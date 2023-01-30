#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

vector<int> printDivisors(int n)
{
    // Note that this loop runs till square root
    vector<int>v;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                v.push_back(i);
  
            else {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    return v;
}


void solve(){
    int n;
    cin>>n;
    if(n%2){
        cout<<-1;
        return;
    }
    // vector<int> v = printDivisors(n);
    // sort(v.begin(),v.end());
    // for(int i = 0 ; i< v.size() ; i++){
    //     for(int j = i ; j< v.size() ; j++){
    //         if(pow(v[i],v[j])*v[j] + pow(v[j],v[i])*v[i] == n){
    //             cout<<v[i]<<" "<<v[j];
    //             return;
    //         }
    //     }
    // }
    // cout<<-1;
    cout<<1<<" "<<n/2;
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