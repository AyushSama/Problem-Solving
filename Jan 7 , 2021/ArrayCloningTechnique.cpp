#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int a,b;
		cin >> a >> b;
		int sum=a;
		int i=(b/4)*4+1;
		for(;i<=b; i++)
			sum+=(sum%2==0)?-i:i;
		cout << sum << "\n";
}

int32_t main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}