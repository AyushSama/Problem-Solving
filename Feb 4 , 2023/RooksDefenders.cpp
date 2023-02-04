#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int q; 
    cin>>q;
    vector<vector<int>>v(n+1,vector<int>(n+1,0));
    while(q--){
        int in;
        cin>>in;
        if(in==1){
            int a ,b;
            cin>>a>>b;
            for(int i= 0 ; i < n ; i++){
                v[a][i]++;
                v[i][b]++;
            }
        }
        if(in==2){
            int a , b;
            cin>>a>>b;
            for(int i= 0 ; i < n ; i++){
                v[a][i]--;
                v[i][b]--;
            }
        }
        if(in==3){
            int a , b , c ,d;
            cin>>a>>b>>c>>d;
            bool res = true;
            for(int i=a;i<=c;i++){
                for(int j = b; j <=d; j++){
                    if(v[i][j]<=0){
                        res = false;
                        // break;
                    }
                }
            }
            if(res)
                cout<<"YES";
            else    
                cout<<"NO";
            cout<<endl;
        }
    }
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}