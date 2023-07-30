#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
     ll a, b, s;
    cin >> a >> b >> s;
    ll ans = abs(a) + abs(b);
    if(ans <= s && ((s - ans) % 2 == 0)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
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
