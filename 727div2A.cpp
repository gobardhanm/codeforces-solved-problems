#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n, x, t;
		cin >> n >> x >> t;
		if (t < x) {
			cout << 0 << endl;
			continue;
		}
		ll first = t / x;
		if (first >= n - 1) {
			ll ans = n - 1;
			ans = (ans * (ans + 1)) / 2;
			cout << ans << endl;
		} else {
			ll ans1 = first;
			ans1 = (ans1 * (ans1 + 1)) / 2;
			ll ans2 = (n - 1 - first) * first;
			cout << ans1 + ans2 << endl;
		}
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
