#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int sumDigits(int n){
    int sum = 0;
    while(n>0){
        sum+= n%10;
        n = n/10;
    }
    return sum;
}

void solve(){
    int n;
    cin>>n;
    if(n%2){
        if(((n/2)+1)%10==0){
            int one = n/2;
            int two = n/2+1;
            for(int i = 1; ;i++){
                if(sumDigits(one)==sumDigits(two)){
                    cout<<one<<" "<<two;
                    return;
                }
                one++;
                two--;
            }
        }
        cout<<n/2<<" "<<(n/2)+1;
        return;
    }
    else{
        cout<<n/2<<" "<<n/2;
        return;
    }
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