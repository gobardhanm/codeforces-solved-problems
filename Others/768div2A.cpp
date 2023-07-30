#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for(int i = 0; i < n;i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        ll ans = 1e18;
        for(int i = 0; i < n; i++){
            vector<ll> temp1 = a, temp2 = b;
            if(a[i] < b[i])
                swap(temp1, temp2);
            for(int j = 0; j < n; j++){
                if(i == j)
                    continue;
                if(temp1[j] < temp2[j]){
                    swap(temp1[j], temp2[j]);
                }
            }
            ll val1 = *max_element(temp1.begin(), temp1.end());
            ll val2 = *max_element(temp2.begin(), temp2.end());
            ans = min(ans, val1 * val2);
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
