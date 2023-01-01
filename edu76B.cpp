#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    ll x, y;
        cin >> x >> y;
        set<int> s;
        while(x < y){
            if(s.count(x))
                break;
            s.insert(x);
            if(x & 1)
                x -= 1;
            else
                x = x / 2 * 3;
        }
        cout << (x >= y ? "YES" : "NO") << endl;
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
