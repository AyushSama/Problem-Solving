#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli a,b,n,c,d;
        cin>>a>>b;
        string s;
        cin>>s;
        c=a,d=b;

        n=s.size();

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')b--;
            else if(s[i]=='0')a--;
        }

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='?')
            {
                if(s[(n-(i+1))]=='?')
                {
                    if(s[i]=='0' and a>0)
                    {
                        s[(n-(i+1))]='0';
                        a--;
                    }
                    else if(s[i]=='1' and b>0)
                    {
                        s[(n-(i+1))]='1';
                        b--;
                    }
                }
            }
        }

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='?' and s[(n-(i+1))]=='?')
            {
                if(a>=2 and (n-(i+1))!=i)
                {
                    s[i]='0';
                    s[n-(i+1)]='0';
                    a-=2;
                }
                else if(b>=2 and (n-(i+1))!=i)
                {
                    s[i]='1';
                    s[n-(i+1)]='1';
                    b-=2;
                }
                else if((n-(i+1))==i and a>0)
                {
                    s[i]='0';
                    a--;
                }
                else if((n-(i+1))==i and b>0)
                {
                    s[i]='1';
                    b--;
                }
            }
        }

        string s1=s;
        reverse(s1.begin(),s1.end());


        if(s==s1 and count(s.begin(),s.end(),'0')==c and count(s.begin(),s.end(),'1')==d )
        {
            cout<<s<<endl;
        }
        else cout<<"-1"<<endl;
    }


    return 0;
}
