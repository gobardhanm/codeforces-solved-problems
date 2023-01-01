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
        ll val = 1;
        int index = 0;
        vector<ll> v;
        while(index < n){
            if(val < 1e9){
                v.pb(val);
                val *= 3;
                index++;
            }else{
                break;
            }
        }
        if(index == n){
            cout << "YES" << endl;
            for(auto i : v){
                cout << i << " ";
            }
            cout << endl;
        }else{
            cout << "NO" << endl;
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
