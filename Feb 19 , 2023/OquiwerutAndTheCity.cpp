#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i  < n; i++){
        cin>>arr[i];
    }
    int left = 0;
    int right = 0 ;
    for(int i = 1 ; i < n-1; i+=2){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            continue;
        else{
            left+= max(arr[i-1],arr[i+1])-arr[i]+1;
        }
    }
    for(int i = n-2 ; i >0 ; i-=2){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            continue;
        else{
            right+= max(arr[i-1],arr[i+1])-arr[i]+1;
        }
    }
    // cout<<left<<" "<<right<<endl;
    
    int mid = 0 ;
    for(int i = 1 ; i < n/2; i+=2){
        int j = n-i-1;
        if(i+1==j){
            int x=0;
            int y=0;
            if(arr[i]<=arr[i-1] || arr[i]<=arr[i+1])
                x+= max(arr[i-1],arr[i+1])-arr[i]+1;
            if(arr[j]<=arr[j-1] || arr[j]<=arr[j+1])
                y+= max(arr[j-1],arr[j+1])-arr[j]+1;
            mid += min(x,y);
        }
        if(arr[i]<=arr[i-1] || arr[i]<=arr[i+1])
            mid+= max(arr[i-1],arr[i+1])-arr[i]+1;
        if(arr[j]<=arr[j-1] || arr[j]<=arr[j+1])
            mid+= max(arr[j-1],arr[j+1])-arr[j]+1;
    }
    cout<<min(mid,min(left,right));
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