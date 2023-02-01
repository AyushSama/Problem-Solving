//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:

    bool solve(vector<int>arr , int idx , int n , int sum){
        if(idx==n){
            if(sum==0)
                return true;
            else    
                return false;
        }
        bool take , noTake;
        if(arr[idx]<=sum){
            take = solve(arr,idx+1,n,sum-arr[idx]);
        }
        noTake = solve(arr,idx+1 , n , sum);
        return take|noTake  ;
    }
    
    
    
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        return solve(arr,0,arr.size(),sum);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t=1;
    // cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends