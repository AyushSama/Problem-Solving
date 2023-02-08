 #include <bits/stdc++.h>
 using namespace std;
  
  const int N = 1e5 + 10;
  
  char str[N];
  
  void solve() {
      int n;
     scanf("%d %s", &n, str);
     int ret = 0;
     for (int i = 0; i < n; i++) {   
         int cnt[10] = {0}, maxv = 0, s = 0;
         for (int j = i; j < n && j < i + 100; j++) {    
             int t = str[j] - '0';
             maxv = max(maxv, ++cnt[t]);
             if (cnt[t] == 1) s++;
             if (maxv <= s) ret++;
         }
     }
     printf("%d\n", ret);
 }
 
 int main() {
     int t;
     scanf("%d", &t);
     while (t--) {
     solve();
     }
     
     return 0;
 }