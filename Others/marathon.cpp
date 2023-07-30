#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a < b && a < c && a < d) cout << "3" << endl;
    else if(a < b && a< c) cout << "2" << endl;
    else if (a <c && a < d) cout << "2" << endl;
    else if(a < b && a < d) cout << "2" << endl;
    else if( a< b || a< c || a< d ) cout << "1" << endl;
    else cout << "0" << endl;
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
