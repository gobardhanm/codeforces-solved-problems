#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin() , v.end()  );
        cout << v[n - 1] + v[n - 2] << endl;
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
