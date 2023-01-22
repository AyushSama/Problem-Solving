#include<bits/stdc++.h>
using namespace std;
#define int long long

int maxPrimeFactors(long long n)
{
    long long maxPrime = -1;
    while (n % 2 == 0) {
        maxPrime = 2;
        n >>= 1; // equivalent to n /= 2
    }
     while (n % 3 == 0) {
        maxPrime = 3;
        n=n/3;
    }
    for (int i = 5; i <= sqrt(n); i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
      while (n % (i+2) == 0) {
            maxPrime = i+2;
            n = n / (i+2);
        }
    }
    if (n > 4)
        maxPrime = n;
 
    return maxPrime;
}

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0  ;i < n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    bool one = false;
    bool consec = false;
    for(int i = 0 ; i< n; i++){
        if(arr[i]==1)
            one = true;
        if(i<n-1 && arr[i]+1 == arr[i+1]){
            consec = true;
        }
    }
    cout<<((one && consec)?"NO":"YES");
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