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
    int x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		if (x1 == x2 && x2 == x3 && (max(y1, y2) > y3 && min(y1, y2) < y3)) {
			cout << abs(x2 - x1) + abs(y2 - y1) + 2 << endl;
		} else if (y1 == y2 && y2 == y3 && (max(x1, x2) > x3 && min(x1, x2) < x3)) {
			cout << abs(x2 - x1) + abs(y2 - y1) + 2 << endl;
		} else {
			cout << abs(x2 - x1) + abs(y2 - y1) << endl;
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
