#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int n; string s;
    cin >> n >> s;
 
    string ans;
    if(s[0] == '9') {
        int c = 0;
        for(int i = n - 1; i >= 0; i--) {
            int x = s[i] - '0'; 
            int y = 0;
            x += c;
            if(x > 1) {
                c = 1; 
                y = 11 - x;
            } else {
                c = 0;
                y = 1 - x;
            }
            ans += y + '0';
        }
        reverse(ans.begin(), ans.end());
    } else {
        for(int i = 0; i < n; i++) {
            int x = s[i] - '0';
            int y = 9 - x;
            ans += y + '0';
        }
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
