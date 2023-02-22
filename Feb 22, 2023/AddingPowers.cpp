#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    int mx = -1;
    priority_queue<int>pq;
    for(int i = 0 ;i < n; i++){
        cin>>arr[i];
        mx = max(mx,arr[i]);
        if(arr[i]>0)
            pq.push(arr[i]);
    }
    if(mx==0){
        cout<<"YES";
        return;
    }
    stack<int>s;
    int temp = 1;
    while(temp<=mx){
        s.push(temp);
        temp = temp*k;
    }
    while(!pq.empty() && !s.empty()){
        int a = pq.top();
        int b = s.top();
        s.pop();
        if(b>a){
            continue;
        }
        pq.pop();
        a-=b;
        if(a!=0)
            pq.push(a);
    }

    if(pq.empty())
        cout<<"YES";
    else    
        cout<<"NO";
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