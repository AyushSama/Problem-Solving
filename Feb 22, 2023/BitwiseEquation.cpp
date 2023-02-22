#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

void solve(){
    int n;
    cin>>n;
    if(n==0){
        cout<<1<<" "<<3<<" "<<4<<" "<<5;
        return;
    }
    int c = 0;
    int d = 0;
    bool turn = false;
    for(int i= 0 ; i < 32 ; i++){
        if((n&((int)1<<i))){
            if(turn){
                c = c|((int)1<<i);
                turn = !turn;
            }
            else{
                d = d|((int)1<<i);
                turn = !turn;
            }
        }
    }
    if(c==0||d==0){
        for(int i= 0 ; i < 32 ; i++){
        if(!(n&((int)1<<i))){
            c = c|((int)1<<i);
            d = d|((int)1<<i);
            break;
        }
    }
    }
    long a=1;
	while(true)
	{
		if(a!=c && a!=d)
		    break;
		a*=2;
	}
	long b=2;
	while(true)
	{
		if(b!=a && b!=c && b!=d)
		    break;
		b*=2;
	}
    cout<<a<<" "<<b<<" "<<c<<" "<<d;
}

int32_t main(){

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    IOS;
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}