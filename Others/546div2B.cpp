#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int n, k;
    cin >> n >> k;
    ll ans = 2;
    ans += 1;
    ans += 2 * (n - 1);
    if(k == 1 || k == n)
        ans += n - 1;
    else{
        ans += min(k - 1, n - k) * 2;
        ans += max(k - 1, n - k);
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    /* cin >> tc; */
    for(int i = 1; i <= tc; i++) {
        solve();
    }
    
    return 0;
}
