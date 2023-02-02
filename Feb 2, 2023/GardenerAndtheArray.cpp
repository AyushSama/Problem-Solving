# include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		map<int, int> freq;
		vector <int> a[n+1];
		for(int i=1; i<=n; i++) {
			int k;
			cin >> k;
			for(int j=1; j<=k; j++) {
				int x;
				cin >> x;
				a[i].push_back(x);
				freq[x]++;
			}
		}
		bool stee=false;
		for(int i=1; i<=n; i++) {
			bool st=true;
			for(auto j : a[i]) {
				if(freq[j]==1) {
					st=false;
					break;
				}
			}
			if(st) {
				stee=true;
				cout << "YES" << endl;
				break;
			}
		}
		if(!stee) cout << "NO" << endl;
	}	
}