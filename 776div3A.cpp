#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
     string a;
        cin >> a;
        char ch;
        cin >> ch;
        bool ans = false;
        for(int i = 0; i < a.length(); i++){
            if(a[i] == ch && ((i % 2) == 0)){
                ans = true;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
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
