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
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    string s;
    cin >> s;
 
    map<int, char> m;
    bool ok = true;
    for(int i = 0; i < n; i++) {
        if(m.find(a[i]) == m.end()) {
            m[a[i]] = s[i];
        } else {
            if(m[a[i]] == s[i])
                continue;
            else
                ok = false;
        }
    }
 
 
    ok ? cout << "YES\n" : cout << "NO\n";
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

