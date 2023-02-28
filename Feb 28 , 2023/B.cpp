#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

string LCSubStr(string X, string Y)
{
    // Find length of both the strings.
    int m = X.length();
    int n = Y.length();
 
    // Variable to store length of longest
    // common substring.
    int result = 0;
 
    // Variable to store ending point of
    // longest common substring in X.
    int end;
 
    // Matrix to store result of two
    // consecutive rows at a time.
    int len[2][n + 1];
 
    // Variable to represent which row of
    // matrix is current row.
    int currRow = 0;
 
    // For a particular value of i and j,
    // len[currRow][j] stores length of longest
    // common substring in string X[0..i] and Y[0..j].
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                len[currRow][j] = 0;
            }
            else if (X[i - 1] == Y[j - 1]) {
                len[currRow][j] = len[1 - currRow][j - 1] + 1;
                if (len[currRow][j] > result) {
                    result = len[currRow][j];
                    end = i - 1;
                }
            }
            else {
                len[currRow][j] = 0;
            }
        }
 
        // Make current row as previous row and
        // previous row as new current row.
        currRow = 1 - currRow;
    }
 
    // If there is no common substring, print -1.
    if (result == 0) {
        return "-1";
    }
 
    // Longest common substring is from index
    // end - result + 1 to index end in X.
    return X.substr(end - result + 1, result);
}

void solve(){
    string a;
    string b;
    cin>>a>>b;
    if(a==b){
        cout<<"YES"<<endl;
        cout<<a;
        return;
    }
    if(a[0]==b[0]){
        cout<<"YES"<<endl;
        cout<<a[0]<<"*";
        return;
    }
    else if(a[a.size()-1]==b[b.size()-1]){
        cout<<"YES"<<endl;
        cout<<"*"<<a[a.size()-1];
        return;
    }
    string temp = LCSubStr(a,b);
    if(temp=="-1"){
        cout<<"NO";
        return;
    }
    if(temp.size()==1){
        cout<<"NO";
        return;
    }
    cout<<"YES"<<endl;
    cout<<"*"<<temp.substr(0,2)<<"*";
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