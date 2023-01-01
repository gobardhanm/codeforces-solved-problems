#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;
    if(min(sx - 1, m - sy) <= d and min(n - sx, sy - 1) <= d) {
        cout << -1 << endl;
    } else {
        cout << n + m - 2 << endl;
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
