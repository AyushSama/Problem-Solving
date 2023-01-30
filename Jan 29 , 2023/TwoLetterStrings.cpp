#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

bool sortt(string s){
    return s[0]<s[1];
}

void solve(){
    int n; cin>>n;
vector <string> v(n);
unordered_map <char,int> m1,m2;
unordered_map <string,int> m3;
for(int i=0;i<n;i++){
	cin>>v[i];
	m1[v[i][0]]++;
	m2[v[i][1]]++;
	m3[v[i]]++;
}
int sum1=0;
for(auto i:m1){
	int x = i.second;
	sum1+= ((x)*(x-1))/2;
}
for(auto i:m2){
	int x = i.second;
	sum1+= ((x)*(x-1))/2;
}
for(auto i:m3){
	int x = i.second;
	sum1-= ((x)*(x-1));
}
cout<<sum1;
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