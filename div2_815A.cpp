#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
 
    ll x = a * d;
    ll y = b * c;
    if(x == y) {
        cout << "0\n";
    } else if((y != 0 && x % y == 0) || (x != 0 && y % x == 0)) {
        cout << "1\n";
    } else {
        cout << "2\n";
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
