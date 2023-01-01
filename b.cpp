#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto &x : a) cin >> x; 
    for(auto &x : b) cin >> x; 

    long long ans = 0;
    for(int i = 0; i < n; i++) 
        ans += a[i];

    sort(b.begin(), b.end());
    for(int i = 0; i < n - 1; i++) 
        ans += b[i];

    cout << ans << "\n";
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
