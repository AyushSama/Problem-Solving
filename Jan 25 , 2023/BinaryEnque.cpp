#include <bits/stdc++.h>
using namespace std;
#define int long long 

const int N=2e5+5;
const int mod=1e9+7;

int a[N];






void solve(){
    int n,s;
    cin>>n>>s;
    int sum=0;
    vector<pair<int,int> >pos;
    int ans=0;
    pos.push_back(make_pair(0,-1));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]==1)
            pos.push_back(make_pair(sum,i));
        if(sum>=s)
        {
            int p=sum-s;
            pair<int,int>x=make_pair(p,-5);
            auto it=lower_bound(pos.begin(),pos.end(),x);
            int z=i-(*it).second;
            ans=max(ans,z);
        }
    }
    if(sum<s)
    {
        cout<<-1<<endl;
        return;
    }
   cout<<n-ans<<endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
    int T=1;
    cin>>T;
    while(T--){
        solve();
    }
}