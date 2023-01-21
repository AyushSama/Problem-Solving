#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int> SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    vector<int>res;
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            res.push_back(p);
    
    return res;
}


void solve(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n];
    for(int i = 0 ; i < n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    // for(int i = 0 ; i < n; i++)
    //     cout<<arr[i]<<" ";
    // cout<<endl;
    vector<int>primes = SieveOfEratosthenes(m);
    sort(primes.begin(),primes.end());
    // for(auto x : primes)
    //     cout<<x<<" ";
    // cout<<endl;
    int j = 0;
    vector<int>temp;
    int size = primes.size();
    for(int i = 0 ; i < n; i++){
        if(arr[i]%primes[j]==0){
            j++;
            temp.push_back(arr[i]);
        }
    }
    if(temp.size()!=m-1){
        cout<<-1;
        return;
    }
    cout<<*max_element(temp.begin(),temp.end())-*min_element(temp.begin(),temp.end());
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