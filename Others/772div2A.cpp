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
        vector<ll> cnt(32), arr(n);
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
            for(ll j = 0; j < 32; j++){
                if(arr[i] & (1LL << j))
                    cnt[j]++;
            }
        }
        ll sum = 0;
        for(ll i = 0; i < 32; i++){
            if(cnt[i]){
                sum += (1LL << i);
            }
        }
        cout << sum << endl;
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
