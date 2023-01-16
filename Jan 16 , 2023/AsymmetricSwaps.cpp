#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(2*n);
	    for(int i = 0 ; i< 2*n ;i++)
	        cin>>v[i];
	    sort(v.begin(),v.end());
	    int res = INT_MAX;
	   // for(auto x : v)
	   //     cout<<x<<" ";
	   // cout<<endl;
	    for(int i = 0 ; i <=n ; i++){
	        res = min(res,v[i+n-1]-v[i]);
	    }
	    cout<<res<<endl;
	}
	return 0;
}
