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
    ll n;
		cin >> n;
		ll val1 = n / 3;
		ll val2 = 2 * val1;
		if (val1 + val2 == n) {
			cout << val1 << " " << val2 / 2 << endl;
		} else if (val1 + val2 == n - 1) {
			cout << val1 + 1 << " " << val2 / 2 << endl;
		} else {
			cout << val1 << " " << val2 / 2 + 1 << endl;
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
