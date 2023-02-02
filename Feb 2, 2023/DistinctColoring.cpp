//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:

    long long int compute(int n , int r[] , int g[], int b[] , int res , int idx , int state ,vector<vector<int>>& dp){
        if(idx==n){
            return 0;
        }
        if(dp[idx][state]!=-1)
            return dp[idx][state];
        long long int taker, takeg,takeb;
        if(idx==0){
            taker =  compute(n,r,g,b,res+r[idx],idx+1,0,dp);
            takeg =  compute(n,r,g,b,res+g[idx],idx+1,1,dp);
            takeb =  compute(n,r,g,b,res+b[idx],idx+1,2,dp);
        }
        else{
            if(state==0){
                takeg = compute(n,r,g,b,res+g[idx],idx+1,1,dp);
                takeb = compute(n,r,g,b,res+b[idx],idx+1,2,dp);
            }
            if(state==1){
                taker = compute(n,r,g,b,res+r[idx],idx+1,0,dp);
                takeb = compute(n,r,g,b,res+b[idx],idx+1,2,dp);
            }
            if(state==2){
                taker = compute(n,r,g,b,res+r[idx],idx+1,0,dp);
                takeg = compute(n,r,g,b,res+g[idx],idx+1,1,dp);
            }
        }
        return dp[idx][state] = min(taker,min(takeg,takeb));
    }

    long long int distinctColoring(int N, int r[], int g[], int b[]){
        // code here 
        
        vector<vector<int>>dp(N+1 , vector<int>(4,-1));
        return compute(N,r,g,b,0,0,0,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int r[N],g[N],b[N];
        for(int i = 0; i < N; i++)
            cin >> r[i];
        for(int i = 0; i < N; i++)
            cin >> g[i];
        for(int i = 0; i < N; i++)
            cin >> b[i];
        
        Solution ob;
        cout << ob.distinctColoring(N, r, g, b) << endl;
    }
    return 0; 
}
// } Driver Code Ends