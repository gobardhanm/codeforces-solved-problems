    #include "bits/stdc++.h"
    using namespace std;
     
    #define ll long long
     
    void solve() {
    	int a, b, c, x, y;
    	cin >> a >> b >> c >> x >> y;
     
    	int dog = min(a, x);
    	int cat = min(b, y);
     
    	x -= dog;
    	y -= cat;
    	
    	if(c >= x + y) cout << "YES\n";
    	else cout << "NO\n";
    }
     
    int main() {
    	ios::sync_with_stdio(0), cin.tie(0);
     
    	int tc=1; 
    	cin >> tc;
    	for(int i=1; i<=tc; ++i) {
    		solve();
    	}
    	return 0;
    }
