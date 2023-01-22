#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    double sum =0;
    vector<int>x;
    vector<int>y;
    for(int i= 0 ; i < 2*n ; i++){
        int a , b;
        cin>>a>>b;
        if(a==0){
            y.push_back(abs(b));
        }
        else{
            x.push_back(abs(a));
        }
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    // for(auto i : x){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(auto i : y){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    cout<<fixed<<setprecision(15);
    for(int i = 0 ; i < n; i++){
        sum+= sqrt((x[i]*x[i]+y[i]*y[i]));
    }

    cout<<sum;
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