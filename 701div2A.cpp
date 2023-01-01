#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int A, B;
    cin >> A >> B;
    
    int res = A + 3, a, b, ans;
    for(int i = (B < 2 ? 1 : 0); i < res; i++) {
        b = B + i;
        a = A;
        ans = i;
        while(a) {
            a /= b;    
            ans++;
        }
        if(ans < res) res = ans;
    }
    cout << res << endl;
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
