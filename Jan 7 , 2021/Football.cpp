#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.find("0000000")!= string::npos || s.find("1111111")!=string::npos )
            cout<<"YES";
        else    
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}