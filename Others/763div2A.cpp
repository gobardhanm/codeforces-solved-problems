#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
     int n, m, a, b, c, d;
        cin >> n >> m >> a >> b >> c >> d;
        int ans = 0;
        int dr = 1;
        int dc = 1;
        while(true){
            if(a == c || b == d)
                break;
            if(a + dr > n)
                dr = -1;
            else if(a + dr < 1)
                dr = 1;
            if(b + dc > m)
                dc = -1;
            else if(b + dc < 1)
                dc = 1;
            a += dr;
            b += dc;
            ans++;
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
