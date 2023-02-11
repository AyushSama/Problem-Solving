#include <bits/stdc++.h>
 
using namespace std;
#define int long long
int su(int x)
{
    int ans=0;
    while(x)
    {
        ans+=(x%10);x/=10;
    }
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    mt19937 rnd;rnd.seed(228);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        while(true)
        {
            int x=rnd()%n;int y=n-x;
            if(abs(su(x)-su(y))<=1)
            {
                cout<<x<<' '<<y<<'\n';
                break;
            }
        }
    }
    return 0;
}