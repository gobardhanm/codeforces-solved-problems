#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
// Gobardhan Meher

void solve() {
	ll m, s;
    cin >> m >> s;
    
    vector<ll> a(m);
    ll mx = 0, sum = 0;
    
    for (auto& x: a) {
        
        cin >> x;
        
        sum += x;
        mx = max(mx, x);
    }
    
    ll total = (mx * (mx + 1)) / 2;
    
    while (total - sum < s) {
        
        total += ++mx;
    }
    
    cout << (total - sum == s ? "YES" : "NO") << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++) {
		solve();
	}
	
	return 0;
}
