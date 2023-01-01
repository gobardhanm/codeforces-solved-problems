#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), ps(n+1);
    for(auto& x : a) 
        cin >> x;
 
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
        ps[i+1] = ps[i] + a[i];
    }
 
    for(int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        
        cout << ps[n-x+y] - ps[n-x] << endl;
    }
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
