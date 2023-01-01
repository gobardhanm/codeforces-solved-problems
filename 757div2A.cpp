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
    ll n, l, r, k;
		cin >> n >> l >> r >> k;
		vector<ll> v;
		for(int i = 0; i < n;i++){
			ll a;
			cin >> a;
			if(a <= r && a >= l)
				v.pb(a);
		}
		sort(all(v));
		ll ans = 0;
		for(auto i : v){
			if(i <= k){
				k -= i;
				ans++;
			}
		}
		cout << ans << endl;
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
