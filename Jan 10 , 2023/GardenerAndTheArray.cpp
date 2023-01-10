#include<bits/stdc++.h>
using namespace std;
#define int long long

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}

void solve(){
    int n;
    cin>>n;
    vector<int>(n);
    while(n--){
        int x;
        cin>>x;
        set<int>arr;
        for(int i = 0 ; i< n; i++){
            int temp;
            cin>>temp;
            arr.insert(temp);
        }
        string s;
        for(int i = 1 ; i<= ; i++)
    }
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}