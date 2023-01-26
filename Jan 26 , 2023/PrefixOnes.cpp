#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int getMaxLength(string arr, int low , int high)
{
    int count = 0; //initialize count
    int result = 0; //initialize max
 
    for (int i = low; i < high; i++)
    {
        if (arr[i] == '0')
            count = 0;
        else
        {
            count++;
            result = max(result, count);
        }
    }
    return result;
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.find('0')==string::npos){
        cout<<n;
        return;
    }
    int ans = 0;
    for(int i = 0 ; i < n; i++){
        if(s[i]=='1')
            ans++;
        else    
            break;
    }
    int max = getMaxLength(s,ans,n);
    cout<<ans+max;
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